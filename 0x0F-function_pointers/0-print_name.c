#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - gets string length
* @f: struct dog
* @name: name of dog
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
