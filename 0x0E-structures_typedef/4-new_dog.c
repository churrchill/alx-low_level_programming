#include <stdio.h>
#include "dog.h"
/**
* new_dog - gets string length
* @name: string
* @age: age
* @owner: owner
* Return: void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t di;
dog_t *d = &di;
if (name == NULL)
return (NULL);
else
d->name = name;
d->age = age;
if (owner == NULL)
return (NULL);
else
d->owner = owner;
if (d ==  NULL)
return NULL;
return (d);
}
