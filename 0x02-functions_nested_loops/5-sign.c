#include "main.h"
/**
*print_sign - writes the character c to stdout
*
*@c: c is an ascii character
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
