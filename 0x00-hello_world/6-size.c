#include <stdio.h>

/**
 * main-Print size of various types
 *
 * Description: using the main function
 * Return:0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %ld byte(s)\n", sizeof(a));
	printf("size of an int: %ld byte(s)\n", sizeof(b));
	printf("size of a long int: %ld byte(s)\n", sizeof(c));
	printf("size of a long long int %ld byte(s)\n", sizeof(d));
	printf("size of a float: %ld byte(s)\n", sizeof(e));
	return (0);
}

