#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * and uppercase
 *
 * Description: print the alphabet in lowercase
 * and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	putchar(i);

	for (i = 'A'; i<= 'Z'; i++)
	putchar(i);

	putchar('\n');
	return (0);
}
