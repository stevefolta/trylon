#define Switch_(value) 	\
	{ 	\
		obj_ value_ = value;

#define SwitchMatches_(value) 	\
		(Call_(_eq__eq_, value_, value))

#define EndSwitch_ 	\
	}

