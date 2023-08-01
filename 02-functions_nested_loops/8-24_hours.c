#include "main.h"
/**
 * jack_bauer - prints every minute of the day 
 * of Jack Bauer, starting from 00:00 to 23:59 
 * 
 * @n: int to recieve
 * Return: Always 0 (Success)
 */


/* void jack_bauer(void)
{
	int i, j, k, l;
	int max = 9;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			max = 3;
		for (j = 0; j <= max; j++)	//max
		{
			if (j == 5)
				max = 9;
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
					printf("%i%i:%i%i\n", i, j, k, l);
			}
		}
	}
} */

/**
 * jack_bauer - prints every minute of the day 
 * of Jack Bauer, starting from 23:59 to 00:00 
 * 
 * @n: int to recieve
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 23; hr >= 0; hr--)
		for (min = 59; min >= 0; min--)
		{
			if (hr < 10)
				printf("0");
			printf("%i:", hr);
			if (min < 10)
				printf("0");
			printf("%i\n", min);
		
			sleep(1);
			system("clear");
			//* system( "read -n 1 -s -p \"Press any key to continue...\"" );
		}
}
