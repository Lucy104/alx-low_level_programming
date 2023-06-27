#include "main.h"
#include <stdio.h>

/**
  * print_array - function that prints n elements of an array of integers
  *
  * @a: parameter
  * @n: parameter
  * Return: void
  */
void print_array(int *a, int n)
{
	int l;
	int k;

	l = 0;
	k = 1;
	while (l < n)
	{
		printf("%d", a[l]);
		if (k < n)
			printf(", ");
		k++;
		l++;
	}
	printf("\n");
}
