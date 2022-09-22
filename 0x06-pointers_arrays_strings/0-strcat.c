#include <stdio.h>
#include "main.h"
/**
* _strcat - gets the lenght
* @dest: a pointer parameter
* @src: a second pointer
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int i = 0, n = 0;
while (* (dest + n) != '\0')
{
n++;
}
while (* (src + i) != '\0')
{
* (dest + i + n) = * ( src + i);
i++;
}
* (dest + i + n) = '\0';
return dest;
}
