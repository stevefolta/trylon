#include "Trylon_.h"
#include <Carbon/Carbon.h>


obj_ create__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUCreateStyle((ATSUStyle*) &this_->fields[0]);
	return NULL;
}


obj_ close__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUDisposeStyle((ATSUStyle) this_->fields[0]);
	this_->fields[0] = NULL;
	return NULL;
}


obj_ font__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUFontID fontID;
	ByteCount actualParamSize;
	extern obj_ invalid_font_id__Carbon__ATSUI();

	if (this_->fields[0] == NULL)
		return invalid_font_id__Carbon__ATSUI();

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUFontTag,
	                 sizeof(ATSUFontID), &fontID, &actualParamSize);
	return BuildInt_(fontID);
}


obj_ font_co___Carbon__ATSUI__Style(obj_ this_, obj_ font)
{
	ATSUFontID fontID = IntValue_(font);;
	ATSUAttributeTag tag = kATSUFontTag;
	ByteCount valueSize = sizeof(ATSUFontID);
	ATSUAttributeValuePtr valuePtr = &fontID;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ size__Carbon__ATSUI__Style(obj_ this_)
{
	Fixed size;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return BuildInt_(0);

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

	if (this_->fields[0] == NULL)
		return NULL;

	size = Long2Fix(IntValue_(new_size));
	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ is_bold__Carbon__ATSUI__Style(obj_ this_)
{
	Boolean value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUQDBoldfaceTag,
	                 sizeof(Boolean), &value, &actualParamSize);
	return (value ? true__Standard : false__Standard);
}


obj_ is_bold_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_value)
{
	ATSUAttributeTag tag = kATSUQDBoldfaceTag;
	Boolean value = (new_value == true__Standard);
	ByteCount valueSize = sizeof(Boolean);
	ATSUAttributeValuePtr valuePtr = &value;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ is_italic__Carbon__ATSUI__Style(obj_ this_)
{
	Boolean value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUQDItalicTag,
	                 sizeof(Boolean), &value, &actualParamSize);
	return (value ? true__Standard : false__Standard);
}


obj_ is_italic_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_value)
{
	ATSUAttributeTag tag = kATSUQDItalicTag;
	Boolean value = (new_value == true__Standard);
	ByteCount valueSize = sizeof(Boolean);
	ATSUAttributeValuePtr valuePtr = &value;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ is_underlined__Carbon__ATSUI__Style(obj_ this_)
{
	Boolean value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUQDUnderlineTag,
	                 sizeof(Boolean), &value, &actualParamSize);
	return (value ? true__Standard : false__Standard);
}


obj_ is_underlined_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_value)
{
	ATSUAttributeTag tag = kATSUQDUnderlineTag;
	Boolean value = (new_value == true__Standard);
	ByteCount valueSize = sizeof(Boolean);
	ATSUAttributeValuePtr valuePtr = &value;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ is_condensed__Carbon__ATSUI__Style(obj_ this_)
{
	Boolean value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUQDCondensedTag,
	                 sizeof(Boolean), &value, &actualParamSize);
	return (value ? true__Standard : false__Standard);
}


obj_ is_condensed_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_value)
{
	ATSUAttributeTag tag = kATSUQDCondensedTag;
	Boolean value = (new_value == true__Standard);
	ByteCount valueSize = sizeof(Boolean);
	ATSUAttributeValuePtr valuePtr = &value;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ is_extended__Carbon__ATSUI__Style(obj_ this_)
{
	Boolean value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUQDExtendedTag,
	                 sizeof(Boolean), &value, &actualParamSize);
	return (value ? true__Standard : false__Standard);
}


obj_ is_extended_co___Carbon__ATSUI__Style(obj_ this_, obj_ new_value)
{
	ATSUAttributeTag tag = kATSUQDExtendedTag;
	Boolean value = (new_value == true__Standard);
	ByteCount valueSize = sizeof(Boolean);
	ATSUAttributeValuePtr valuePtr = &value;

	if (this_->fields[0] == NULL)
		return NULL;

	ATSUSetAttributes((ATSUStyle) this_->fields[0], 1, &tag, &valueSize,
	                  &valuePtr);
	return NULL;
}


obj_ ascent__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUTextMeasurement value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUAscentTag,
	                 sizeof(value), &value, &actualParamSize);
	return BuildInt_(Fix2Long(value));
}


obj_ descent__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUTextMeasurement value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSUDescentTag,
	                 sizeof(value), &value, &actualParamSize);
	return BuildInt_(Fix2Long(value));
}


obj_ leading__Carbon__ATSUI__Style(obj_ this_)
{
	ATSUTextMeasurement value;
	ByteCount actualParamSize;

	if (this_->fields[0] == NULL)
		return false__Standard;

	ATSUGetAttribute((ATSUStyle) this_->fields[0], kATSULeadingTag,
	                 sizeof(value), &value, &actualParamSize);
	return BuildInt_(Fix2Long(value));
}



