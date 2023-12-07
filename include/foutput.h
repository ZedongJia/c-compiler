#ifndef F_OURPUT
#define F_OURPUT
#include <stdarg.h>
#include <stdio.h>

// array errors
#define ARRAY_INCOMPLETED "Incompleted array is not allowed!"


void error(int line, const char* fmt, ...);

#endif // F_OURPUT
