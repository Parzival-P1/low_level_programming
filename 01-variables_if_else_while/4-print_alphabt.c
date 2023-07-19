#include <stdio.h>

/**
 * main - prints the alphabet in lowcase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";

	int i = 0;

	while (alpha[i] >= 'a' && alpha[i] <= 'z')
		putchar(alpha[i++]);

	putchar('\n');
	return (0);
}

