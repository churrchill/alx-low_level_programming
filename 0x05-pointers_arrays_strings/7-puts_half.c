#include <stdio.h>
#include "main.h"
/**
* puts_half - gets the lenght
* @str: a pointer parameter
* Return: void
*/
void puts_half(char *str)
{
int i, j;
i = 0;
while (str[i] != '\0')
{
i++;
}
j = i / 2;
if (j % 2 != 0)
j = i / 2;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
