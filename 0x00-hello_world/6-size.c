#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	long int a;
	long long int b;

	printf("Size of a char: "sizeof(char) "byte(s)\n");
	printf("Size of an int: "sizeof(int) "byte(s)\n");
	printf("Size of a long int: " sizeof(a) "byte(s)\n");
	printf("Size of a long long int: "sizeof(b) "byte(s)\n");
	printf("Size of a float: "sizeof(float) "byte(s)\n");

	return (0);
}
