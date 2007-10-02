{ include: Objects.st }
{ include <sys/time.h> }

Timeval : Object ()

Timeval new
[
	| _size |
	{ v__size = (oop) sizeof(struct timeval); }.
	^(self _vtable) _alloc: _size
]


Timeval now
[
	| timeval |
	timeval := Timeval new.
	{ gettimeofday((struct timeval*) v_timeval, NULL); }.
	^timeval
]


Timeval _tv_sec
{
	/* Warning: may lose precision! */
	return (oop) ((struct timeval*) self)->tv_sec;
}


Timeval _tv_usec
{
	/* Warning: may lose precision. */
	return (oop) ((struct timeval*) self)->tv_usec;
}


Timeval _milliseconds
{
	long long now;
	now = 
		((long long) ((struct timeval*) self)->tv_sec) * 1000000LL +
		((struct timeval*) self)->tv_usec;
	return (oop) (long) (now / 1000);
}


Timeval - other
[
	| result |
	result := Timeval new.
	{
		struct timeval* cur = (struct timeval*) self;
		struct timeval* other = (struct timeval*) v_other;
		struct timeval* result = (struct timeval*) v_result;
		result->tv_sec = cur->tv_sec - other->tv_sec;
		result->tv_usec = cur->tv_usec - other->tv_usec;
		if (cur->tv_usec < other->tv_usec) {
			result->tv_sec -= 1;
			result->tv_usec += 1000000;
			}
	}.
	^result
]



"Copyright 2007 Steve Folta.  See the License file."

