#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 48;
while (a <= 57)
{
putchar(a);
if (a == 57)
{
putchar(' ');
break;
}
putchar(',');
putchar(' ');
a++;
}
return (0);
}
