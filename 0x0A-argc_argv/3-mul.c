#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - gets the lenght
* @argv: arg vector
* @argc: arg count
* Return: int
*/
int main(int argc, char* argv [])
{
int pro;
if (argc == 3)
{
pro = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n",pro);
return (0);
}
printf("Error\n");
return (1);
}
