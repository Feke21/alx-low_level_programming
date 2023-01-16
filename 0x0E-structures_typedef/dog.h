#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog header
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: struct called dog that stores its
 * name, age and owner 
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} ;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
