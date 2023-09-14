#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character.
 * @c: char to recieve
 * Return: 1 if c is lowcase | 0 otherwise
 */

int _islower(int c)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	if ((alpha[c]) == (!'z'))
		return (1);
	else
		return (0);
}
