#include <stdio.h>
/**
 * main - program that prints out the alphabet in lowercase
 * followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	char var = 'a';
	char x = '\n';

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}

	putchar(x);

	return (0);
}
