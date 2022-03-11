#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * except q and e
 *
 * Description: print the alphabet in lowercase
 * except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a', i != 'q', i != 'e' ; i <= 'z'; i++)

	putchar(i);
	putchar('\n');
	return (0);
}
