#include "main.h"
/**
* times_table - writes the character c to s
* On error, -1 is returned, and errno is set appropriately.
*/
void times_table(void)
{
int fact = 0;
while (fact < 10)
{
int i = 0;
while (i < 10)
{
int res = fact * i;
int res2 = fact * (i + 1);
int tens = res / 10;
int ones = res % 10;
if (i == 9)
{
if (res >= 10)
{
_putchar(tens + '0');
}
_putchar(ones + '0');
}
else  if (res >= 10){
_putchar(tens + '0');
_putchar(ones +'0');
}
else
{
_putchar(ones + '0');
}
if (res2 < 10 && i != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (res2 >= 10 && i ! =9)
{
_putchar(',');
_putchar(' ');
}
i++;
}
_putchar('\n');
fact++;
}
}
