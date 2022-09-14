#include "main.h"
/**
*_islower - writes the character c to stdout
*
*@c for new number
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
