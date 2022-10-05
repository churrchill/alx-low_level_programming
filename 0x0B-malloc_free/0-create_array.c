#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - gets the lenght
* @size: a pointer parameter
* @c: character
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *siz;
if (size < 1)
return (NULL);
siz = malloc(size * sizeof(c));
if (siz == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
siz[i] = c;
}
return (siz);
}
