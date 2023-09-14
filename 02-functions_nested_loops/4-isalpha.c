#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: char to recieve
 * Return: 1 if c is lowcase | 0 otherwise
 */

int _isalpha(int c)
{
	//char *alpha = (char *) malloc(sizeof(char) * 30);
	//strcpy(alpha, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	//return ((c >= 102 && c <= 141) || (c >= 141 && c <= 172));

	if ((c >= 101 && c <= 132) || (c >= 141 && c <= 172))
		return (1);
	else
		return (0);	

	//free(alpha);
}
