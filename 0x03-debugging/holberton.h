#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

/**
 * positive_or_negative - return the sign of a number
 * @i: number
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
void positive_or_negative(int i);

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c);

/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year);

#endif
