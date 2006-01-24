#include "Trylon_.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

extern obj_ new_co___Standard__File__FileMissingException(obj_);
extern obj_ new_co_error_co___Standard__File__FileOpenException(obj_, obj_);


obj_ size__Standard__File(obj_ this_)
{
	obj_ exception;
	struct stat statBuf;

	char* pathStr = MakeCString_(this_->fields[0]);
	int result = stat(pathStr, &statBuf);
	if (result < 0) {
		exception = new_co___Standard__File__FileMissingException(this_->fields[0]);
		Throw_(exception);
		}
	return BuildInt_(statBuf.st_size);
}


obj_ exists__Standard__File(obj_ this_)
{
	struct stat statBuf;
	char* pathStr = MakeCString_(this_->fields[0]);
	int result = stat(pathStr, &statBuf);
	return (result == 0 ? true__Standard : false__Standard);
}


obj_ remove__Standard__File(obj_ this_)
{
	char* pathStr = MakeCString_(this_->fields[0]);
	remove(pathStr);
	return NULL;
}



/* ----- */


obj_ create_co___Standard__File__InStream(obj_ this_, obj_ path)
{
	char* pathStr = MakeCString_(path);
	FILE* filePtr = fopen(pathStr, "r");
	if (filePtr == NULL)
		Throw_(new_co___Standard__File__FileMissingException(path));
	this_->fields[0] = (obj_) filePtr;
	return NULL;
}


obj_ close__Standard__File__InStream(obj_ this_)
{
	if (this_->fields[0]) {
		fclose((FILE*) this_->fields[0]);
		this_->fields[0] = NULL;
		}
	return NULL;
}


obj_ read_buffer_co_length_co___Standard__File__InStream(
	obj_ this_, obj_ buffer, obj_ length)
{
	return BuildInt_(
		fread(BytePtrValue_(buffer), 1, IntValue_(length),
		      (FILE*) this_->fields[0]));
}


/* ----- */


obj_ create_co___Standard__File__OutStream(obj_ this_, obj_ path)
{
	char* pathStr = MakeCString_(path);
	FILE* filePtr = fopen(pathStr, "w+");
	if (filePtr == NULL) {
		obj_ errStr = BuildString_(strerror(errno));
		Throw_(new_co_error_co___Standard__File__FileOpenException(path, errStr));
		}

	this_->fields[0] = (obj_) filePtr;
	return NULL;
}


obj_ close__Standard__File__OutStream(obj_ this_)
{
	if (this_->fields[0] == NULL)
		return NULL;

	fclose((FILE*) this_->fields[0]);
	this_->fields[0] = NULL;
	return NULL;
}


obj_ write_buffer_co_length_co___Standard__File__OutStream(
	obj_ this_, obj_ buffer, obj_ length)
{
	fwrite(BytePtrValue_(buffer), 1, IntValue_(length), (FILE*) this_->fields[0]);
	return NULL;
}


