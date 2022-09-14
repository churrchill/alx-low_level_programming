#include "main.h"
/**
* print_last_digit - writes the character c to stdout
*
*@c: c is an ascii character
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int c)
{
return (c % 10);
}
