#include "Trylon_.h"
#include <Carbon/Carbon.h>

#define textLayout	((ATSUTextLayout) this_->fields[0])
#define utc16Text 	((UniChar*) this_->fields[1])


obj_ create__Carbon__ATSUI__TextLayout(obj_ this_)
{
	ATSUCreateTextLayout((ATSUTextLayout*) &this_->fields[0]);
	utc16Text = NULL;
	return NULL;
}


obj_ close__Carbon__ATSUI__TextLayout(obj_ this_)
{
	ATSUDisposeTextLayout(textLayout);
	textLayout = NULL;
	utc16Text = NULL;
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
	extern obj_ allocate_bytes_co___Standard__Implementation(obj_);
	UsingMethod_(start)
	UsingMethod_(stopper)

	/* Copy the UTF8 text to UTC16 */
	p = BytePtrValue_(Call_(start, string));
	stopper = BytePtrValue_(Call_(stopper, string));
	length = stopper - p;
	utc16Text = Allocate_(length * 2);
	destPtr = utc16Text;
	length = 0;
	for (; p < stopper; ++p) {
		/***/
		*destPtr++ = *p;
		length += 1;
		}

	/* Set the layout's text */
	ATSUSetTextPointerLocation(textLayout, utc16Text,
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


