#include <stdio.h>
#include "main.h"
/**
* _strchr - gets the lenght
* @s: a pointer parameter
* @c: a second pointer
* Return: chare
*/
char *_strchr(char *s, char c)
{
char *f = NULL;
int a = 0;
while (s[a] != '\0')
{
if (s[a] == c)
return (s + a);
a++;
}
return (f);
}
