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
double doubleType;
long longType;
long long longlongType;
char charType;
/* Sizeof operator is used to evaluate the size of a variable*/
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
printf("Size of double: %ld bytes\n", sizeof(doubleType));
printf("Size of char: %ld byte\n", sizeof(charType));
return (0);
}
