#include <stdio.h>

/**
 * main-Print size of various types
 *
 * Return:0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char:%dbyte(s)\n",sizeof(a));
	printf("size of an int:%dbyte(s)\n",sizeof(b));
	printf("size of a long int:%dbyte(s)\n",sizeof(c));
	printf("size of a long long int%dbyte(s)\n",sizeof(d));
	printf("size of a float:%dbyte(s)\n",sizeof(e));
	return(0)
}

