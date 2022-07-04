#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - description about struct dog
 * @name: name of the dog, pointer to char
 * @age: age of the dog, float
 * @owner: owner of the dog, pointer to char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

#endif /* _DOG_H_ */
