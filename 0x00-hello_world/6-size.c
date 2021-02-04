#include <stdio.h>

/**
 *main - this is the main function that contains the entire program
 *
 *Return: 0 SUCESS
 */
int main(void)
{
int integerType;
float floatType;
long longType;
long long longlongType;
char charType;
/* Sizeof operator is used to evaluate the size of a variable*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(integerType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
