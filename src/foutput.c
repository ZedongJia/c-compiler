#include <foutput.h>

void error(int line, const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    printf("\033[31mLine:%4d, ", line);
    vfprintf(stderr, fmt, ap);
    printf("\033[0m");
    fprintf(stderr, ".\n");
}
