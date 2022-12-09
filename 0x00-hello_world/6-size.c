#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof (char));
	printf("Size of an int: %zu bytes(s)\n", sizeof (int));
        printf("Size of a long int int: %zu bytes(s)\n", sizeof (long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof (longlong int));
	printf("Size of float: %zu byte(s)\n", sizeof (float));
	return (0);
}
