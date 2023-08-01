#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*  prints _putchar, followed by a new line. */
int _putchar(char c);

/* prints the alphabet, in lowercase, followed by a new line. */
void print_alphabet(void);

/*  prints 10 times the alphabet, in lowercase, followed by a new line. */
void print_alphabet_x10(void);

/* checks for lowercase character. */
int _islower(int c);

/* checks for alphabetic character. */
int _isalpha(int c);

/* prints the sign of a number. */
int print_sign(int n);

/* computes the absolute value of an integer. */
int _abs(int);

/*  prints the last digit of a number. */
int print_last_digit(int);

/* prints every minute of the day of Jack Bauer, 
starting from 00:00 to 23:59  */
void jack_bauer(void);

/*  prints the 9 times table, starting with 0. */
void times_table(void);

/* adds two integers and returns the result. */
int add(int, int);

/* prints all natural numbers from n to 98, 
followed by a new line. */
void print_to_98(int n);

/* A D V A N C E D */

/* 12. prints the n times table, starting with 0 */
void print_times_table(int n);

/* 13. prints the sum of all the multiples of 3 or 5 below 1024 (excluded) */

/* 14 prints the first 50 Fibonacci numbers */
fibo_nums(void);

/* 15. prints the sum of the even-valued terms */

/* 16. prints the first 98 Fibonacci numbers */
fibonacci_1st_98(void);

#endif /* MAIN_H */
