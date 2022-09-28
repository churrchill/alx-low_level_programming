#include <stdio.h>
#include "main.h"
/**
* _strncat - gets the lenght
* @dest: a pointer parameter
* @src: a second pointer
* @n: no of terms
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
