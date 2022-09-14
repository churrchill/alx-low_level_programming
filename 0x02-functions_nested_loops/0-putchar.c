#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char name[8] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(name[i]);
i++;
}
_putchar('\n');
return (0);
}
