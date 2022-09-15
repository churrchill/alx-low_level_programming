#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* positive_ornegative
*
* Return: Always 0 (Success)
*/
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
}
