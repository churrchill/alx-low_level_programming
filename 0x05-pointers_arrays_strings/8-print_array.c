#0;276;0cinclude <stdio.h>
#include "main.h"
/**
* print_array - gets the lenght
* @a: a pointer parameter
* @n: a pointer parameter
* Return: void
*/
void print_array(int *a, int n)
{
int i, count;
i = 0;
count = 1;
if (n < 0)
n = 0;
if (n > 0)
{
while (a[i] != '\0' && count < n)
{
printf("%d, ", a[i]);
i++;
count++;
}
printf("%d\n", a[i]);
}
}
