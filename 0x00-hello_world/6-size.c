#include <stdio.h>
/**
 * main -  print out size of data types in C
 *
 * Return: 0
 *
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	print("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	print("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	print("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
