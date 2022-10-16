#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - gets string length
* @array: struct dog
* @size: name of dog
* @cmp: name o func
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (size <= 0)
return (-1);
while (a < size)
{
if (cmp(array[a]))
return (a);
a++;
}
return (-1);
}
