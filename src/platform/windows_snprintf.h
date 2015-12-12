#ifndef _WINDOWS_SNPRINTF_H
#define _WINDOWS_SNPRINTF_H

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#if defined(_MSC_VER) && _MSC_VER < 1900

#include <crtdefs.h>

#define snprintf c99_snprintf
#define vsnprintf c99_vsnprintf

int c99_vsnprintf(char *outBuf, size_t size, const char *format, va_list ap);
int c99_snprintf(char *outBuf, size_t size, const char *format, ...);

#endif

#ifdef __cplusplus
}   /* ... extern "C" */
#endif  /* __cplusplus */

#endif
