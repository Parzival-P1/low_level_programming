#include "main.h"
/**
 * add - prints all natural numbers from n to 98
 * @n: First printed number
 * 
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i, j;

	for (i = 0; i <= 98; ++i)
	{
		for (j = i; j <= i; ++j)
			printf("%i, ", j);
	}	
	putchar('\n');
}
