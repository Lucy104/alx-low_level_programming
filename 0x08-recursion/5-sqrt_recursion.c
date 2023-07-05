#include <stdio.h>
#include "main.h"

/**
  * _sqrt - function that returns the natural square root
  * @l: input
  * @k: input
  * Return: Always 0
  */
int _sqrt(int l, int k)
{
	if (l == 0)
		return (0);
	else if (k * k > l || l < 0)
		return (-1);
	else if (k * k == l)
		return (k);
	return (_sqrt(l, k + 1));
}
/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: input
  * Return: Always 0
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
