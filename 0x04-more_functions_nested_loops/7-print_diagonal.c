#include "main.h"
/**
0;276;0c * print_diagonal - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i = 1;
while (i <= n)
{
int sp = i - 1;
while (sp > 0)
{
_putchar(' ');
sp--;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
_putchar('\n');
}
