#include "main.h"
/**
* times_table - writes the character c to stdout
*
*@c: c is an ascii character
*
*c number for paramerter
*
* Return: On success 1.
*
* On error, -1 is returned, and errno is set appropriately.
*/
void times_table(void)
{
int fact = 0;
while ( fact < 10)
{
int i = 0;
while (i < 10)
{
int res = fact * i;
 int tens = res / 10;
 int ones = res % 10;
 if (i == 9)
   {
     if (res >10){
       _putchar(tens+'0');}
	 _putchar(ones +'0');
     
   }
 else  if (res >10){
   _putchar(tens + '0');
   _putchar(ones +'0');
     _putchar(',');
   _putchar(' ');
 }
 else{
   _putchar(ones + '0');
   _putchar(',');
   _putchar(' ' );
   _putchar(' ');}
i++;
}
_putchar('\n');
fact++;
}
}
