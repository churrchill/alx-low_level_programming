#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - prints numbers 0-14 ten times
* @a: a pointer parameter
* @b: second ointer valaue
* Return: void
*/
void swap_int(int *a, int *b)
{
int keep = *a;
*a = *b;
*b = keep;
}
