#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit nums
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0;

	char * nums = (char *) malloc(sizeof(char) * 11);
	strcpy(nums, "0123456789");

	while (i < strlen(nums))
	{
		putchar(nums[i++]);

		if (i != strlen(nums))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	free(nums);
	return (0);
}
