#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k;

	char *nums = (char *) malloc(sizeof(char) * 11);
	strcpy(nums, "0123456789");

	while (i < strlen(nums))
	{
		j = i + 1;
		while (j < strlen(nums))
		{
			k = j + 1;
			while (k < strlen(nums))
			{
				putchar(nums[i]);
				putchar(nums[j]);
				putchar(nums[k]);

				if(i != strlen(nums) - 3)
				{
					putchar(',');
					putchar(' ');
				}	
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	free(nums);
	return (0);
}

