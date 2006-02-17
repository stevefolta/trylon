#include "Trylon_.h"
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>


#define socket__fld_	0


static void ThrowError(obj_ message)
{
	extern obj_ new_co___Standard__MessageException(obj_);

	obj_ exception = new_co___Standard__MessageException(message);
	Throw_(exception);
}


obj_ create_co_port_co___Standard__TCPSocket(obj_ this_, obj_ server_name,
                                             obj_ port)
{
	struct hostent* hostEntry;
	struct sockaddr_in address;
	int socketID, result;

	hostEntry = gethostbyname(MakeCString_(server_name));
	if (hostEntry == NULL) {
		DefineString_(0, "Couldn't find server.\n");
		ThrowError(Str_(0));
		}

	socketID = socket(PF_INET, SOCK_STREAM, 0);
	if (socketID == 0) {
		DefineString_(0, "Couldn't open socket.\n");
		ThrowError(Str_(0));
		}

	address.sin_family = AF_INET;
	address.sin_port = htons(IntValue_(port));
	address.sin_addr = *((struct in_addr*) hostEntry->h_addr);
	memset(address.sin_zero, 0, sizeof(address.sin_zero));
	result = 
		connect(socketID, (struct sockaddr*) &address, sizeof(struct sockaddr));
	if (result == -1) {
		DefineString_(0, "Couldn't connect to socket.\n");
		close(socketID);
		ThrowError(Str_(0));
		}

	Field_(socket) = BuildInt_(socketID);
	return NULL;
}


obj_ close__Standard__TCPSocket(obj_ this_)
{
	if (Field_(socket)) {
		close(IntValue_(Field_(socket)));
		}

	return NULL;
}


obj_ send_co___Standard__TCPSocket(obj_ this_, obj_ string)
{
	char* start = StringStart_(string);
	char* stopper = StringStopper_(string);
	int socketID, bytesSent;

	if (Field_(socket) == NULL)
		return;
	socketID = IntValue_(Field_(socket));

	while (start < stopper) {
		bytesSent = send(socketID, start, stopper - start, 0);
		if (bytesSent == -1) {
			DefineString_(0, "Socket send failed.\n");
			ThrowError(Str_(0));
			}
		start += bytesSent;
		}

	return NULL;
}


obj_ receive_co___Standard__TCPSocket(obj_ this_, obj_ num_bytes)
{
	int socketID;
	char* buffer;
	ssize_t bytesReceived;
	int numBytes = IntValue_(num_bytes);

	if (Field_(socket) == NULL)
		return;
	socketID = IntValue_(Field_(socket));

	buffer = (char*) Allocate_(numBytes);

	bytesReceived = recv(socketID, buffer, numBytes, 0);
	if (bytesReceived == -1) {
		DefineString_(0, "Socket receive failed.\n");
		ThrowError(Str_(0));
		}
	else if (bytesReceived == 0) {
		DefineString_(0, "");
		close(socketID);
		Field_(socket) = NULL;
		return Str_(0);
		}
	return BuildStringStartStopper_(buffer, buffer + bytesReceived);
}



