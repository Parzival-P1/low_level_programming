#include "main.h"
/**
 * print_times_table - prints the n times table, 
 * starting with 0
 * @i: First printed number
 * @j: Second printed number
 * 
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
    int j, i = 0;
    
    if (n >= 0 && n < 15)
    {
        while (i <= n)
        {
            j = 0;
            while (j <= n) 
            {
                printf("%i", i * j);

                if (j != 14)
                    printf(", ");
                
                ++j;
            }    
            ++i;
        }
        printf("\n");
    }
}



/* void print_times_table(int n)
{
    int i = 0;

    if (n >= 0 && n <= 15)
    {
        //printf("0");
        for (n = 0; n <= 1; n++)
        {
            for(i = 0; i <= 3; ++i)
                printf("%i, ", n * i);
        }


        printf("\n");
    }    
} */
