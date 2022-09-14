#include <unistd.h>
#include "_putchar"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main()
{
char name[8] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(name[i]);
i++;
}
putchar("\n");
return (0); 
}
