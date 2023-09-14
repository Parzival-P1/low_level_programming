#include "main.h"

/**
 * print_alphabet - Write a program that prints the alphabet,
 * in lowcase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alpha[i] != '\0')
		_putchar (alpha[i++]);
}
