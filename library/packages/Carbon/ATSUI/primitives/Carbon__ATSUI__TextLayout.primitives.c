#include "Trylon_.h"
#include <Carbon/Carbon.h>

#define textLayout	((ATSUTextLayout) this_->fields[0])
#define ucs16Text 	((UniChar*) this_->fields[1])


obj_ create__Carbon__ATSUI__TextLayout(obj_ this_)
{
	ATSUCreateTextLayout((ATSUTextLayout*) &this_->fields[0]);
	ucs16Text = NULL;
	return NULL;
}


obj_ close__Carbon__ATSUI__TextLayout(obj_ this_)
{
	ATSUDisposeTextLayout(textLayout);
	textLayout = NULL;
	ucs16Text = NULL;
	return NULL;
}


obj_ cg_context_co___Carbon__ATSUI__TextLayout(obj_ this_, obj_ context)
{
	ATSUAttributeTag tag = kATSUCGContextTag;
	ByteCount size = sizeof(CGContextRef);
	ATSUAttributeValuePtr valuePtr = &context->fields[0];

	ATSUSetLayoutControls(textLayout, 1, &tag, &size, &valuePtr);

	return NULL;
}


obj_ text_co___Carbon__ATSUI__TextLayout(obj_ this_, obj_ string)
{
	int length;
	char* p;
	char* stopper;
	UniChar* destPtr;
	UniChar uniChar;
	extern obj_ allocate_bytes_co___Standard__Implementation(obj_);
	UsingMethod_(start)
	UsingMethod_(stopper)

	/* Copy the UTF8 text to UCS16 */
	p = BytePtrValue_(Call_(start, string));
	stopper = BytePtrValue_(Call_(stopper, string));
	length = stopper - p;
	ucs16Text = Allocate_(length * 2);
	destPtr = ucs16Text;
	length = 0;
	for (; p < stopper; ++p) {
		if ((*p & 0x80) == 0)
			*destPtr++ = *p;
		else if ((*p & 0xE0) == 0xC0) {
			uniChar = (((UniChar) *p) & 0x1F) << 6;
			++p;
			uniChar |= ((UniChar) *p) & 0x3F;
			*destPtr++ = uniChar;
			}
		else /* (*p & 0xF0) == 0xE0 */ {
			uniChar = (((UniChar) *p) & 0x0F) << 12;
			++p;
			uniChar |= (((UniChar) *p) & 0x3F) << 6;
			++p;
			uniChar |= ((UniChar) *p) & 0x3F;
			*destPtr++ = uniChar;
			}
		length += 1;
		}

	/* Set the layout's text */
	ATSUSetTextPointerLocation(textLayout, ucs16Text,
	                           kATSUFromTextBeginning, kATSUToTextEnd, length);

	return NULL;
}


obj_ style_co___Carbon__ATSUI__TextLayout(obj_ this_, obj_ style)
{
	UsingMethod_(primitive_style)
	ATSUStyle atsuiStyle;

	/* We're only going to assign the first character, relying on ATSUI's
	   (documented) behavior of extending the last style to any unsigned 
	   characters. */
	atsuiStyle = (ATSUStyle) Call_(primitive_style, style);
	ATSUSetRunStyle(textLayout, atsuiStyle, 0, 1);

	return NULL;
}


obj_ draw_x_co_y_co___Carbon__ATSUI__TextLayout(obj_ this_, obj_ x, obj_ y)
{
	Fixed fixedX, fixedY;

	fixedX = Long2Fix(IntValue_(x));
	fixedY = Long2Fix(IntValue_(y));
	ATSUDrawText(textLayout, kATSUFromTextBeginning, kATSUToTextEnd,
	             fixedX, fixedY);

	return NULL;
}


obj_ text_width__Carbon__ATSUI__TextLayout(obj_ this_)
{
	ATSUTextMeasurement textBefore, textAfter, ascent, descent;

	ATSUGetUnjustifiedBounds(textLayout, kATSUFromTextBeginning, kATSUToTextEnd,
	                         &textBefore, &textAfter, &ascent, &descent);
	return BuildInt_(Fix2Long(textAfter));
}


