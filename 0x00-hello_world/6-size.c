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
printf("Size of a char: %ld byte\n", sizeof(charType));
printf("Size of a int: %ld bytes\n", sizeof(integerType));
printf("Size of a long: %1d byte\n", sizeof(longType));
printf("Size of a long long: %1d byte\n", sizeof(longlongType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));
return (0);
}
