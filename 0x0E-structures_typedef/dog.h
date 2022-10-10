#include <stdlib.h>
/**
* struct dog - Short description
* @name: First member
* @age: Second membe
* @owner: name of owner
* Description: An objectof dog types
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
* u_int - Typedef for unsigned int
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
