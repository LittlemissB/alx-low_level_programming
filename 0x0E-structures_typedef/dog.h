#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - strucuture dog
 * @name: attribute pointer to char name dog
 * @age: attribute float age dog
 * @owner: attribute pointer to char owner dog
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
