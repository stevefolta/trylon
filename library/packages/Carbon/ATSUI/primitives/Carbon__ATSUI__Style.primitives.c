#include "Trylon_.h"
#include <Carbon/Carbon.h>


obj_ create__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUCreateStyle((ATSUStyle*) &this_->fields[0]);
	return NULL;
}


obj_ font__Carbon__ATSUI__Style(obj_ this_)
{
	/***/
	return NULL;
}


obj_ font_co___Carbon__ATSUI__Style(obj_ this, obj_ font)
{
	/***/
	return NULL;
}


obj_ size__Carbon__ATSUI__Style(obj_ this_)
{
	Fixed size;
	ByteCount actualParamSize;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUSizeTag, sizeof(Fixed),
	                 &size, &actualParamSize);

	return BuildInt_(Fix2Long(size));
}


obj_ size_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_size)
{
	Fixed size;
	ATSUAttributeTag tag = kATSUSizeTag;
	ByteCount valueSize = sizeof(Fixed);
	ATSUAttributeValuePtr valuePtr = &size;

	size = Long2Fix(IntValue_(new_size));
	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
}



