#ifndef _LANG_H
#define _LANG_H

// list:
// english (default)
// hungarian
// german
// crow language from catastrophe crow

// syntax: #define <ISO 639-1 language code>MAIN<error, fatal, warn, or info> <translated version of error, fatal error, warn, or info>

// if the language you can speak is NOT here, feel free to modify the file and also hmarlog.c for the correct output.

#define ENMAINERROR "ERROR"
#define ENMAINFATAL "FATAL ERROR"
#define ENMAINWARN "WARNING"
#define ENMAININFO "INFO"
#define ENLANG "English"

#define HUMAINERROR "HIBA"
#define HUMAINFATAL "FATÁLIS HIBA"
#define HUMAINWARN "FIGYELMEZTETÉS"
#define HUMAININFO "INFORMÁCIÓ"
#define HULANG "Magyar" 

#define DEMAINERROR "FEHLER"
#define DEMAINFATAL "FATALER FEHLER"
#define DEMAINWARN "WARNUNG"
#define DEMAININFO "INFO"
#define DELANG "Deutsch"

#define CRMAINERROR "OIILI"
#define CRMAINFATAL "BWCWE OIILI"
#define CRMAINWARN "SWITHTZ"
#define CRMAININFO "HTBL"
#define CRLANG "NILS EWTZGWZO"

#endif // _lang_h