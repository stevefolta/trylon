#include "Trylon_.h"
#include <Carbon/Carbon.h>

#define context	((CGContextRef) this_->fields[0])


obj_ translate_ctm_tx_co_ty_co___Carbon__Quartz__Context(
	obj_ this_, obj_ tx, obj_ ty)
{
	double ftx, fty;
	DefineString_(1, "Bad parameter to translate-ctm-tx:ty:.", 38);
	extern obj_ new_co___Standard__MessageException(obj_);

	if (tx->class_ == (obj_) &Standard__Float)
		ftx = FloatValue_(tx);
	else if (tx->class_ == (obj_) &Standard__Int)
		ftx = IntValue_(tx);
	else
		Throw_(new_co___Standard__MessageException(Str_(1)));
	if (ty->class_ == (obj_) &Standard__Float)
		fty = FloatValue_(ty);
	else if (ty->class_ == (obj_) &Standard__Int)
		fty = IntValue_(ty);
	else
		Throw_(new_co___Standard__MessageException(Str_(1)));

	CGContextTranslateCTM(context, ftx, fty);
	return NULL;
}


obj_ scale_ctm_sx_co_sy_co___Carbon__Quartz__Context(
	obj_ this_, obj_ sx, obj_ sy)
{
	double fsx, fsy;
	DefineString_(1, "Bad parameter to scale-ctm-sx:sy:.", 34);
	extern obj_ new_co___Standard__MessageException(obj_);

	if (sx->class_ == (obj_) &Standard__Float)
		fsx = FloatValue_(sx);
	else if (sx->class_ == (obj_) &Standard__Int)
		fsx = IntValue_(sx);
	else
		Throw_(new_co___Standard__MessageException(Str_(1)));
	if (sy->class_ == (obj_) &Standard__Float)
		fsy = FloatValue_(sy);
	else if (sy->class_ == (obj_) &Standard__Int)
		fsy = IntValue_(sy);
	else
		Throw_(new_co___Standard__MessageException(Str_(1)));

	CGContextScaleCTM(context, fsx, fsy);
	return NULL;
}


obj_ save_state__Carbon__Quartz__Context(obj_ this_)
{
	CGSaveGState(context);
	return NULL;
}


obj_ restore_state__Carbon__Quartz__Context(obj_ this_)
{
	CGRestoreGState(context);
	return NULL;
}


#define maxColorComponents 10
static void SetupColorComponents(obj_ components, float* floatComponents)
{
	int numComponents, i;
	DefineString_(1, "Too many color components.", 26)
	extern obj_ new_co___Standard__MessageException(obj_);
	UsingMethod_(num_items)  UsingMethod_(at_co_)

	/* Get the components, as floats. */
	numComponents = IntValue_(Call_(num_items, components));
	if (numComponents > maxColorComponents)
		Throw_(new_co___Standard__MessageException(Str_(1)));
	for (i = 0; i < numComponents; ++i)
		floatComponents[i] = IntValue_(Call_(at_co_, components, BuildInt_(i)));
}

obj_ fill_color_co___Carbon__Quartz__Context(obj_ this_, obj_ components)
{
	float floatComponents[maxColorComponents];

	/* Set the fill color. */
	SetupColorComponents(components, floatComponents);
	CGContextSetFillColor(context, floatComponents);

	return NULL;
}


obj_ stroke_color_co___Carbon__Quartz__Context(obj_ this_, obj_ components)
{
	float floatComponents[maxColorComponents];

	/* Set the fill color. */
	SetupColorComponents(components, floatComponents);
	CGContextSetStrokeColor(context, floatComponents);

	return NULL;
}


obj_ fill_rect_co___Carbon__Quartz__Context(obj_ this_, obj_ rect)
{
	UsingMethod_(left)  UsingMethod_(top)
	UsingMethod_(width)  UsingMethod_(height)

	CGRect quartzRect =
		CGRectMake(IntValue_(Call_(left, rect)), IntValue_(Call_(top, rect)),
		           IntValue_(Call_(width, rect)), IntValue_(Call_(height, rect)));
	CGContextFillRect(context, quartzRect);

	return NULL;
}


obj_ clear_rect_co___Carbon__Quartz__Context(obj_ this_, obj_ rect)
{
	UsingMethod_(left)  UsingMethod_(top)
	UsingMethod_(width)  UsingMethod_(height)

	CGRect quartzRect =
		CGRectMake(IntValue_(Call_(left, rect)), IntValue_(Call_(top, rect)),
		           IntValue_(Call_(width, rect)), IntValue_(Call_(height, rect)));
	CGContextClearRect(context, quartzRect);

	return NULL;
}


obj_ flush__Carbon__Quartz__Context(obj_ this_)
{
	CGContextFlush(context);
	return NULL;
}


obj_ synchronize__Carbon__Quartz__Context(obj_ this_)
{
	CGContextSynchronize(context);
	return NULL;
}


