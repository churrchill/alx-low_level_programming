#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - gets string length
* @size: struct dog
* @array: name of dog
* @action: name o func
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int a = 0;
if (array ==NULL || action ==NULL || size == 0)
return;
while (a < size)
{
action(array[a]);
a++;
}
}
