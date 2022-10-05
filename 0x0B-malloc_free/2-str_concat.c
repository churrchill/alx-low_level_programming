#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* str_concat - gets the lenght
* @s1: a pointer parameter
* @s2: character
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0, j = 0, k, m = 0;
if (s1 == NULL)
s1 = "";
else if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
k = i + j;
s = malloc(k *sizeof(char) + 1);
if (s == NULL)
return (NULL);
while (m < i)
{
s[m] = s1[m];
m++;
}
while (m < k)
{
s[m] = s2[m - i];
m++;
}
s[m] = '\0';
return (s);
}
