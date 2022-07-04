#ifndef DOG_H

#define DOG_H
typedef struct dog dog_t;

/**
 * struct dog - such structure of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float *age;
	char *owner;
};
/**
 * _putchar - prints a character
 * @c: character
 * Return: c
 */
int _putchar(char c); /*prototype _putchar*/

/*function that initializes a variable of type struct dog*/
/**
 * init_dog - prints a character
 * @d: character
 * @name: char
 * @age: int
 * @owner: char
 * Return: c
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/*funciton that initiates a variable of type strruct dog*/
/**
 * new_dog - prints a character
 * @name: first memeber
 * @age: second member
 * @owner: third member
 * Description: Longer description
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - print a character
 * @d: first memeber
 * Description: Longer description
 */


void print_dog(struct dog *d);/*function that prints a struct dog*/
/**
 * new_dog - prints a character
 * @name: first memeber
 * @age: second member
 * @owner: third member
 * Description: Longer description
 * Return: Always 0.
 */



dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - prints a character
 * @d: first member
 * Description: Longer description
 */


void free_dog(dog_t *d);



#endif /* _dog_h_ */
