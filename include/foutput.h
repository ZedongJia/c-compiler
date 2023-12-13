#ifndef F_OURPUT
#define F_OURPUT
#include <stdarg.h>
#include <stdio.h>

/* initializer */

#define MANY_INITIALIZER "too many initializer!"
#define TYPE_INITIALIZER_ERROR "initializer should be surrounded by braces!"
#define NOT_ALLOW_BRACE "only array and struct type can be initialized with brace syntax!"

/* def,dec errors */
#define VARIABLE_REDEFINED "variable `%s` has already been defined!"
#define VARIABLE_REDECLARED "variable `%s` has already been declared!"

/* not defined errors */
#define VARIABLE_NOT_DEFINED "variable `%s` has not been defined!"
#define FUNCTION_NOT_DEFINED "function `%s` has not been defined!"

/* array errors */
#define ARRAY_INCOMPLETED "incompleted array is not allowed!"

/* assign errors */
#define ASSIGN_NOT_ALLOW "the left side of the assignment must be a modifiable value!"
#define ASSIGE_COMPLEX_TYPE_ERROR "a value of `%d-D %s` can not be assigned to type `%d-D %s`!"
#define ASSIGN_TYPE_ERROR "a value of type `%s` can not be assigned to type `%s`!"

/* transform errors */
#define TRANSFORM_TYPE_ERROR "a value of type `%s` can not be converted to type `%s`!"
#define TRANSFORM_PTR_ERROR "can not convert `%d-D` ptr to `%d-D` ptr!"

/* operator errors */
#define DELIVERY_TYPE_ERROR "value must be int, not `%s`!"
#define OPERATOR_TYPE_ERROR "`%s` can not be calculated with `%s`!"
#define GET_DATA_ERROR "expression must be ptr!"
#define POINTER_ERROR "* must be applied to struct ptr!"
#define DOT_ERROR "expression must be struct type, not ptr!"

/* struct errors */
#define MEMBER_NOT_FOUND "can not find `%s` in `%s` namespace!"


/* function errors */
#define MORE_ARGUMENTS_ERROR "too many arguments!"
#define LESS_ARGUMENTS_ERROR "too less arguments!"

void error(int line, const char *fmt, ...);

#endif // F_OURPUT
