#include "hmarlog.h"
#include "lang.h"
#include <stdio.h>
#include <stdlib.h>

/* hmarlog v3 plans:
   - make this thing quicker
   - add more languages...
*/

/* hmarlog v2: additions:
   - language selection
   - lang.h for language selection
   - 4 constants for language
   changes:
   - changed "app" in createlogfile() to "program"
*/

/* hmarlog v1: additions:
   - the entire thing
*/

// configured for english, IF you want to change it to the language you added, or use an already added language.

const char* current_language = ENLANG;

const char* mainerr = ENMAINERROR;
const char* maininf = ENMAININFO;
const char* mainfatal = ENMAINFATAL;
const char* mainwarn = ENMAINWARN;

int createlogfile(const char *logfile, const char *header)
{
	FILE *logfile1 = fopen(logfile, "w+");
	fprintf(logfile1, "hmarlog v2, program: %s\n", header);
	fclose(logfile1);
	return 0;
}

// argument usage: "message here", function will do "[LOG TYPE]: message here"

// logerr: log errors 
int logerr(const char *error, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[%s]: %s\n", mainerr,  error);
	fclose(logfile1);
	return 0;
}

// logwarn: log warnings
int logwarn(const char *warn, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[%s]: %s\n", mainwarn,  warn);
	fclose(logfile1);
	return 0;
}

// loginf: log informations
int loginf(const char *inf, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[%s]: %s\n", maininf, inf);
	fclose(logfile1);
	return 0;
}

// logver: log the version info of the app and the library
int logver(const char *appver, const char *logfile) 
{
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[%s]: library version v.1, app version %s\n", maininf, appver);
	fclose(logfile1);
	return 0;
}

// logfatal: logs a fatal error
int logfatal(const char *err, const char *logfile, int shexit) 
{
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[%s]: %s\n", mainfatal, err);
	fclose(logfile1);
	if (shexit == 1) {
		exit(1);
	}
	return 0;
}