#include "Trylon_.h"
#include <Carbon/Carbon.h>

UsingMethod_(x)  UsingMethod_(y)
UsingMethod_(left)  UsingMethod_(top) UsingMethod_(width)  UsingMethod_(height)

#define context	((CGContextRef) this_->fields[0])

float FloatValue(obj_ value)
{
	DefineString_(1, "Bad parameter to a Carbon Quartz Context.", 41);
	extern obj_ new_co___Standard__MessageException(obj_);

	if (value->class_ == (obj_) &Standard__Float)
		return FloatValue_(value);
	else if (value->class_ == (obj_) &Standard__Int)
		return IntValue_(value);
	else
		Throw_(new_co___Standard__MessageException(Str_(1)));
}


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
		floatComponents[i] = FloatValue_(Call_(at_co_, components, BuildInt_(i)));
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


obj_ rgb_fill_color_co___Carbon__Quartz__Context(obj_ this_, obj_ components)
{
	float floatComponents[maxColorComponents];

	/* Set the fill color. */
	SetupColorComponents(components, floatComponents);
	CGContextSetRGBFillColor(context, floatComponents[0], floatComponents[1],
	                         floatComponents[2], floatComponents[3]);

	return NULL;
}


obj_ rgb_stroke_color_co___Carbon__Quartz__Context(obj_ this_, obj_ components)
{
	float floatComponents[maxColorComponents];

	/* Set the fill color. */
	SetupColorComponents(components, floatComponents);
	CGContextSetRGBStrokeColor(context, floatComponents[0], floatComponents[1],
	                           floatComponents[2], floatComponents[3]);

	return NULL;
}


obj_ fill_rect_co___Carbon__Quartz__Context(obj_ this_, obj_ rect)
{
	CGRect quartzRect =
		CGRectMake(FloatValue(Call_(left, rect)), FloatValue(Call_(top, rect)),
		           FloatValue(Call_(width, rect)), FloatValue(Call_(height, rect)));
	CGContextFillRect(context, quartzRect);

	return NULL;
}


obj_ stroke_rect_co___Carbon__Quartz__Context(obj_ this_, obj_ rect)
{
	CGRect quartzRect =
		CGRectMake(FloatValue(Call_(left, rect)), FloatValue(Call_(top, rect)),
		           FloatValue(Call_(width, rect)), FloatValue(Call_(height, rect)));
	CGContextStrokeRect(context, quartzRect);

	return NULL;
}


obj_ clear_rect_co___Carbon__Quartz__Context(obj_ this_, obj_ rect)
{
	CGRect quartzRect =
		CGRectMake(FloatValue(Call_(left, rect)), FloatValue(Call_(top, rect)),
		           FloatValue(Call_(width, rect)), FloatValue(Call_(height, rect)));
	CGContextClearRect(context, quartzRect);

	return NULL;
}



obj_ begin_path__Carbon__Quartz__Context(obj_ this_)
{
	CGContextBeginPath(context);
	return NULL;
}


obj_ close_path__Carbon__Quartz__Context(obj_ this_)
{
	CGContextClosePath(context);
	return NULL;
}


obj_ move_to_x_co_y_co___Carbon__Quartz__Context(obj_ this_, obj_ x, obj_ y)
{
	CGContextMoveToPoint(context, FloatValue(x), FloatValue(y));
	return NULL;
}


obj_ add_line_to_x_co_y_co___Carbon__Quartz__Context(obj_ this_, obj_ x, obj_ y)
{
	CGContextAddLineToPoint(context, FloatValue(x), FloatValue(y));
	return NULL;
}


obj_ add_curve_through_co_and_co_to_co___Carbon__Quartz__Context(
	obj_ this_, obj_ controlPt1, obj_ controlPt2, obj_ point)
{
	CGContextAddCurveToPoint(context,
		FloatValue(Call_(x, controlPt1)), FloatValue(Call_(y, controlPt1)),
		FloatValue(Call_(x, controlPt2)), FloatValue(Call_(y, controlPt2)),
		FloatValue(Call_(x, point)), FloatValue(Call_(y, point)));
	return NULL;
}


obj_ add_quad_curve_through_co_to_co___Carbon__Quartz__Context(
	obj_ this_, obj_ controlPt, obj_ point)
{
	CGContextAddQuadCurveToPoint(context,
		FloatValue(Call_(x, controlPt)), FloatValue(Call_(y, controlPt)),
		FloatValue(Call_(x, point)), FloatValue(Call_(y, point)));
	return NULL;
}


obj_ stroke_path__Carbon__Quartz__Context(obj_ this_)
{
	CGContextStrokePath(context);
	return NULL;
}


obj_ fill_path__Carbon__Quartz__Context(obj_ this_)
{
	CGContextFillPath(context);
	return NULL;
}


obj_ eo_fill_path__Carbon__Quartz__Context(obj_ this_)
{
	CGContextEOFillPath(context);
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


