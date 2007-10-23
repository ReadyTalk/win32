#include <windows.h>

#ifdef HAS_UNICODE
#include <tchar.h>
#include <wchar.h>
#else
#define _T(x) (x)
#define _tcslen(x) strlen(x)
#endif

// windows.h defines some macros which conflict with our code - we undefine
// them below:

#undef ERROR
#undef NO_DATA
