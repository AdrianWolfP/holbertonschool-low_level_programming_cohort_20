#ifndef DOG_H
#define DOG_H
/**
 * struct dog - containing name, age, and owner
 * @name: string of dog's name
 * @age: float of dog's age
 * @owner: string of dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
