#include <stdio.h>
/**
 * main - Write a program that prints its name.
 * 
 * @argc: Number of arguments passed to the program. 
 * @argv: Array of strings. Each is one of the arguments that was passed.
 * @return Zero
 */

int main(int argc __attribute__((unused)), char* argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}
