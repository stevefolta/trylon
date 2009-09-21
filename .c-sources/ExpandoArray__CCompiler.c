#include "Trylon_.h"

UsingClass_(Iterator__ExpandoArray__CCompiler) 
static obj_ tu0_[];
UsingSym_(ExpandoArray)UsingClass_(CCompiler)
UsingClass_(Object__Standard)
UsingClass_(ExpandoArray__CCompiler)
struct ClassInfo ExpandoArray__CCompiler__classInfo_ = 
	{ StdClassRef_(Class__CImplementation), 183, 4, Proto_(ExpandoArray__CCompiler), Proto_(CCompiler), Proto_(Object__Standard), nil, Sym_(ExpandoArray), nil, ((obj_) tu0_) };
struct object ExpandoArray__CCompiler = 
	{ &ExpandoArray__CCompiler__classInfo_, {nil, nil, nil, nil} };

	UsingInt_(1)
static obj_ tu0_[] = { (obj_) StdClassRef_(Tuple), SmallInt_(1), Proto_(Iterator__ExpandoArray__CCompiler) };

#define blocks__fld_	(0)
#define num_blocks__fld_	(1)
#define num_items__fld_	(2)
#define block_size__fld_	(3)


obj_ Iterator__ExpandoArray__CCompiler__accessor_(obj_ this_)
{
	UsingClass_(Iterator__ExpandoArray__CCompiler)
	return Proto_(Iterator__ExpandoArray__CCompiler);
}


obj_ at_co___ExpandoArray__CCompiler(obj_ this_, obj_ index_arg)
{
int index = IntValue_(index_arg);
int block_size = IntValue_(Field_(block_size));
int which_block = index / block_size;
if (which_block >= IntValue_(Field_(num_blocks)))
return nil;
return
((obj_**) BytePtrValue_(Field_(blocks)))[which_block][index % block_size];
}


obj_ at_co_put_co___ExpandoArray__CCompiler(obj_ this_, obj_ index_arg, obj_ object)
{
UsingMethod_(expand_co_)
int index = IntValue_(index_arg);
int block_size = IntValue_(Field_(block_size));
int which_block = index / block_size;
if (which_block >= IntValue_(Field_(num_blocks)))
Call_(expand_co_, this_, BuildInt_(which_block + 1));

((obj_**) BytePtrValue_(Field_(blocks)))[which_block][index % block_size] =
object;

if (index >= IntValue_(Field_(num_items)))
Field_(num_items) = BuildInt_(index + 1);
}


obj_ at_co_set_to_co___ExpandoArray__CCompiler(obj_ this_, obj_ index, obj_ object)
{
	obj_ t0_;
	UsingMethod_(at_co_put_co_)

		{
		t0_ = Call_(at_co_put_co_, this_, index, object);
		}
	return nil;
}


obj_ create__ExpandoArray__CCompiler(obj_ this_)
{
	obj_ t0_;
	UsingInt_(128)
	UsingMethod_(create_co_)

		{
		t0_ = Call_(create_co_, this_, SmallInt_(128));
		}
	return nil;
}


obj_ create_co___ExpandoArray__CCompiler(obj_ this_, obj_ block_size)
{
	extern obj_ ptr_size__Implementation__Standard(obj_ this_);
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(0)
	UsingInt_(1)
	UsingInt_(0)
	UsingMethod_(_st_) UsingMethod_(block_size_co_) UsingMethod_(blocks) UsingMethod_(blocks_co_) UsingMethod_(num_blocks) UsingMethod_(num_blocks_co_) UsingMethod_(num_items_co_) UsingMethod_(ptr_at_co_put_co_)
	UsingClass_(BytePtr__Standard)
	UsingClass_(Implementation__Standard)

		{
		obj_ ptr_size;
		t0_ = Call_(block_size_co_, this_, block_size);
		t0_ = Call_(num_items_co_, this_, SmallInt_(0));
		t0_ = Call_(num_blocks_co_, this_, SmallInt_(1));
		t0_ = ptr_size__Implementation__Standard(Proto_(Implementation__Standard));
		ptr_size = t0_;
		t0_ = Call_(num_blocks, this_);
		t1_ = Call_(_st_, ptr_size, t0_);
		t2_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t1_);
		t3_ = Call_(blocks_co_, this_, t2_);
		t0_ = Call_(blocks, this_);
		t1_ = Call_(_st_, ptr_size, block_size);
		t2_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t1_);
		t3_ = Call_(ptr_at_co_put_co_, t0_, SmallInt_(0), t2_);
		}
	return nil;
}


obj_ expand_co___ExpandoArray__CCompiler(obj_ this_, obj_ new_num_blocks)
{
	extern obj_ ptr_size__Implementation__Standard(obj_ this_);
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	extern obj_ new_co___BytePtr__Standard(obj_ this_, obj_ size);
	obj_ t0_;
	obj_ t1_;
	obj_ t2_;
	obj_ t3_;
	UsingInt_(1)
	UsingMethod_(_st_) UsingMethod_(_pl_) UsingMethod_(_lt_) UsingMethod_(block_size) UsingMethod_(blocks) UsingMethod_(blocks_co_) UsingMethod_(copy_from_co_length_co_) UsingMethod_(num_blocks) UsingMethod_(num_blocks_co_) UsingMethod_(ptr_at_co_put_co_)
	UsingClass_(BytePtr__Standard)
	UsingClass_(Implementation__Standard)

		{
		obj_ new_blocks, ptr_size, which_block;
		/*  Copy the existing "blocks". */
		t0_ = ptr_size__Implementation__Standard(Proto_(Implementation__Standard));
		ptr_size = t0_;
		t0_ = Call_(_st_, ptr_size, new_num_blocks);
		t1_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t0_);
		new_blocks = t1_;
		t0_ = Call_(blocks, this_);
		t1_ = Call_(num_blocks, this_);
		t2_ = Call_(_st_, ptr_size, t1_);
		t3_ = Call_(copy_from_co_length_co_, new_blocks, t0_, t2_);
		
		/*  Add the new blocks. */
		t0_ = Call_(num_blocks, this_);
		which_block = t0_;
		while (1) {
			ContinuePoint_(0)
			t0_ = Call_(_lt_, which_block, new_num_blocks);
			if (!(t0_))
				Break_(0)
			{
			t0_ = Call_(block_size, this_);
			t1_ = Call_(_st_, ptr_size, t0_);
			t2_ = new_co___BytePtr__Standard(Proto_(BytePtr__Standard), t1_);
			t3_ = Call_(ptr_at_co_put_co_, new_blocks, which_block, t2_);
			t0_ = Call_(_pl_, which_block, SmallInt_(1));
			which_block = t0_;
			}
			}
		
		/*  Install the new "blocks". */
		t0_ = Call_(blocks_co_, this_, new_blocks);
		t0_ = Call_(num_blocks_co_, this_, new_num_blocks);
		}
	return nil;
}


obj_ iterator__ExpandoArray__CCompiler(obj_ this_)
{
	extern obj_ new_co___Iterator__ExpandoArray__CCompiler(obj_ this_, obj_ array);
	obj_ t0_;
	UsingClass_(Iterator__ExpandoArray__CCompiler)

		{
		t0_ = new_co___Iterator__ExpandoArray__CCompiler(Proto_(Iterator__ExpandoArray__CCompiler), this_);
		return t0_;
		}
	return nil;
}


obj_ new__ExpandoArray__CCompiler(obj_ this_)
{
	UsingClass_(ExpandoArray__CCompiler)
	obj_ obj = AllocObj_(ExpandoArray__CCompiler);
	create__ExpandoArray__CCompiler(obj);
	return obj;
}


obj_ new_co___ExpandoArray__CCompiler(obj_ this_, obj_ block_size)
{
	UsingClass_(ExpandoArray__CCompiler)
	obj_ obj = AllocObj_(ExpandoArray__CCompiler);
	create_co___ExpandoArray__CCompiler(obj, block_size);
	return obj;
}


