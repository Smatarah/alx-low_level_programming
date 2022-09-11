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

	printf("size of a char: %ldbyte(s)\n", sizeof(a));
	printf("size of an int: %ldbyte(s)\n", sizeof(b));
	printf("size of a long int: %ldbyte(s)\n", sizeof(c));
	printf("size of a long long int %ldbyte(s)\n", sizeof(d));
	printf("size of a float: %ldbyte(s)\n", sizeof(e));
	return (0);
}

