#include <stdio.h>

/**
 * main - prints the alphabet in lowcase and uppcasee
 *
 * Return: (0) Always success
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	while (alpha[i] >= 'a' && alpha[i] <= 'z')
		putchar(alpha[i++]);

	i = 26;

	while (alpha[i] >= 'A' && alpha[i] <= 'Z')
		putchar(alpha[i++]);

	putchar('\n');
	return (0);
}

