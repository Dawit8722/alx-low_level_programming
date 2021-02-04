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
printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(integerType));
printf("Size of a long: %zu byte\n", sizeof(longType));
printf("Size of a long long: %zu byte\n", sizeof(longlongType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
