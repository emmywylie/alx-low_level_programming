#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a
	long int b;
	long long int c;
	char d;
	float f;	

	printf("sizeofachar:%lubyte(s)\n",(unsigned long)sizeof(d));
	printf("sizeofanint:%lubyte(S)\n",(unsigned long)sizeof(a));
	printf("sizeofalongint:%lubyte(s)\n",(unsigned long)sizeof(b));
	printf("sizeofalonglongint:%lubyte(s)\n"(unsigned long)sizeof(c));
	printf("sizeofafloat:%lubyte(s)\n"(unsigned long)sizeof(f));
}

