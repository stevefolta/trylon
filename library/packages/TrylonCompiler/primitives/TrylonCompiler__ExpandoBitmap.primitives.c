#include "Trylon_.h"

#define bitmap__fld_	(0)
#define num_bytes__fld_	(1)


obj_ next_clear_from_co___TrylonCompiler__ExpandoBitmap(
	obj_ this_, obj_ indexObj)
{
	int index = IntValue_(indexObj);
	unsigned int* bitmap = (unsigned int *) BytePtrValue_(Field_(bitmap));
	int numBytes = IntValue_(Field_(num_bytes));
	int whichInt = index / 32;
	int numInts = numBytes / 4;
	unsigned int mask;

	// Check the rest of the word containing "index".
	unsigned int word = bitmap[whichInt];
	if (word != 0xFFFFFFFF) {
		mask = 1 << (index % 32);
		while (mask != 0) {
			if ((word & mask) == 0)
				return BuildInt_(index);
			index += 1;
			mask <<= 1;
			}
		}
	else
		index += 32 - (index % 32);

	// Check the rest of the words.
	whichInt += 1;
	while (whichInt < numInts) {
		word = bitmap[whichInt];
		if (word != 0xFFFFFFFF) {
			mask = 1;
			while (mask != 0) {
				if ((word & mask) == 0)
					return BuildInt_(index);
				index += 1;
				mask <<= 1;
				}
			}
		index += 32;
		whichInt += 1;
		}

	// Not in the allocated area.
	return BuildInt_(index);
}


/*
next-clear-from: index
	which-int = index / 32
	num-ints = num-bytes / 4

	# Check the rest of the word containing "index".
	word = bitmap int-at: which-int
	if word != 0xFFFFFFFF
		mask = 1 << (index % 32)
		while mask != 0
			if (word & mask) == 0
				return index
			index += 1
			mask <<= 1
	else
		index += 32 - (index % 32)

	# Check the rest of the words.
	which-int += 1
	while which-int < num-ints
		word = bitmap int-at: which-int
		if word != 0xFFFFFFFF
			mask = 1
			while mask != 0
				if (word & mask) == 0
					return index
				index += 1
				mask <<= 1
		index += 32
		which-int += 1

	# Not in the allocated area.
	return index
*/


