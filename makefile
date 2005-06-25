# Example makefile for a Cleet project


##### Local settings #####

# Your makefile.local-settings is a good place to set variables like:
# 	DEBUGGER:	TRUE or FALSE
# 	PROFILE: 	TRUE or FALSE
# 	OPTIMIZE:	NONE, SOME, or FULL

-include makefile.local-settings


##### Specific to this program #####

# The name of the program binary:
NAME = trylon

# The name of the program class:
APP_CLASS := TrylonCompiler

# Additional libraries can be added using LIBS and LIBPATHS.

# The makefile engine can also build tarballs.  Example:
# 	TARBALL_FILES := Classes.make classes
# 	TARBALL_EXCLUDED_FILES := classes/CVS

# If you're using the full-C++ compiler, you'll also need to specify
# the primitive classes in Standard that you use.  For example:
# 	ifdef USE_FULL_CPP
# 		RUNTIME_PRIMITIVE_CLASSES += GarbageCollector System
# 		RUNTIME_PRIMITIVE_CLASSES += FileDirectory FileDirectoryIterator
# 		RUNTIME_PRIMITIVE_CLASSES += File FileInStream FileOutStream
# 	endif



##### Call the engine #####

ifndef CLEET_BASE
	CLEET_BASE := /usr/lib/cleet
endif

ifdef NO_CLEET
	CLEET_BASE := 
endif

ifneq "$(wildcard $(CLEET_BASE))" ""

# Cleet is installed, build from the Cleet source.
include $(CLEET_BASE)/makefiles/make-engine

else

# Cleet isn't installed (or NO_CLEET is on); build from the C source.
include makefile.cleetless

endif



