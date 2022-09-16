#include <stdlib.h>
#include <stdio.h>
/**
* positive_ornegative
*@n : number to check
* Return: Always 0 (Success)
*/
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
}
