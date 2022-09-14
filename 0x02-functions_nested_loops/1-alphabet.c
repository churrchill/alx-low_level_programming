#include "main.h"
/**
* _print_alphabet - writes the character c to stdout
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
