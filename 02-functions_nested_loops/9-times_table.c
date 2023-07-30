#include "main.h"
/**
 * times_table - Prints the 9 times table, 
 * starting with 0
 * 
 * Return: void 
 */

void times_table(void)
{
	int j, i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%i", i * j);

			if (j != 9) // si j no es el ultimo print(", ")
				printf(", ");	
			j++;
		}
		i++;
		putchar('\n');
	}
}
