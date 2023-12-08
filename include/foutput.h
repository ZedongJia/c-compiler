#ifndef F_OURPUT
#define F_OURPUT
#include <stdarg.h>
#include <stdio.h>

// array errors
#define ARRAY_INCOMPLETED "Incompleted array is not allowed!"
#define VARIABLE_REDEFINED "Variable %s has already been defined!"
#define VARIABLE_REDECLARED "Variable %s has already been declared!"

void error(int line, const char* fmt, ...);

#endif // F_OURPUT
