#include <stdlib.h>
#include "dog.h"
/**
* _init_dog - gets string length
* @d: string
* @name: name of dog
* @age: age of dog
* @owner: owner's name
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
