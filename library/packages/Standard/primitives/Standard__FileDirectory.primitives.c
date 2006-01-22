#include "Trylon_.h"
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>


#define path__fld_	0

UsingMethod_(_pl_)
DefineString_(slash, "/");


obj_ count__Standard__FileDirectory(obj_ this_)
{
	/* There's gotta be a better way to do this... */
	char* pathStr = MakeCString_(Field_(path));
	DIR* directory = opendir(pathStr);

	int numEntries = 0;
	while (1) {
		if (readdir(directory) == NULL)
			break;
		numEntries += 1;
		}

	closedir(directory);
	return BuildInt_(numEntries);
}


obj_ contains_co___Standard__FileDirectory(obj_ this_, obj_ name)
{
#ifndef MAC_OSX

	/* Build the path string. */
	obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
	char* entryPathStr = MakeCString_(entryPath);

	/* Does the entry exist? */
	struct stat statBuf;
	int result = stat(entryPathStr, &statBuf);
	return BoolFor_(result != -1);

#else 	/* MAC_OSX */

	/* The stupid Mac OSX filesystem is case-insensitive, so simply doing 
	 * a stat() won't tell us if a file with that (case-sensitive) name 
	 * really exists.  stat() doesn't give us the filename, so we need to 
	 * look through the whole directory. */

	/* Open up the directory. */
	char* nameStr;
	char* dirPathStr = MakeCString_(Field_(path));
	DIR* directory = opendir(dirPathStr);
	if (directory == NULL)
		return false__Standard;

	/* Search. */
	nameStr = MakeCString_(name);
	int found = 0;
	while (1) {
		struct dirent* entry = readdir(directory);
		if (entry == NULL)
			break;
		if (strcmp(nameStr, entry->d_name) == 0) {
			found = 1;
			break;
			}
		}

	return BoolFor_(found);
	
#endif
}


obj_ entry_is_directory_co___Standard__FileDirectory(obj_ this_, obj_ name)
{
	/* Build the path string. */
	obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
	char* entryPathStr = MakeCString_(entryPath);

	/* Does the entry exist? */
	struct stat statBuf;
	int result = stat(entryPathStr, &statBuf);
	return BoolFor_(result != -1 && S_ISDIR(statBuf.st_mode));
}


obj_ create_subdirectory_co___Standard__FileDirectory(obj_ this_, obj_ name)
{
	/* Build the path string. */
	obj_ entryPath = Call_(_pl_, Call_(_pl_, Field_(path), Str_(slash)), name);
	char* entryPathStr = MakeCString_(entryPath);

	/* Make the directory. */
	mkdir(entryPathStr, 0777);
}



/* Iterator */

#define directory_handle__fld_	0
#define current_name__fld_    	1

#define directory	((DIR*) Field_(directory_handle))

UsingMethod_(go_forward)


obj_ create_co___Standard__FileDirectory__Iterator(obj_ this_, obj_ path)
{
	char* pathStr = MakeCString_(path);
	Field_(directory_handle) = (obj_) opendir(pathStr);

	/* Grab the first name. */
	Call_(go_forward, this_);
}


obj_ is_done__Standard__FileDirectory__Iterator(obj_ this_)
{
	return BoolFor_(Field_(current_name) == NULL);
}


obj_ current_item__Standard__FileDirectory__Iterator(obj_ this_)
{
	return Field_(current_name);
}


obj_ go_forward__Standard__FileDirectory__Iterator(obj_ this_)
{
	struct dirent* dirEntry;

	if (directory == NULL)
		return false__Standard;

	dirEntry = readdir(directory);
	if (dirEntry == NULL) {
		closedir(directory);
		Field_(directory_handle) = NULL;
		Field_(current_name) = NULL;
		}
	else
		Field_(current_name) = BuildString_(dirEntry->d_name);
}





