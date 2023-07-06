#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * lucy_palindrome - function that returns 1 if a string is a palindrome
  * @s: input
  * @i: parameter
  * Return: Always 0
  */
int lucy_palindrome(char *s, int i)
{
	int l = strlen(s);

	if (*s == s[l - i])
	{
		if (*s == '\0')
			return (1);
		return (lucy_palindrome(s + 1, i + 1));
	}
	return (0);
}

/**
  * is_palindrome - function that returns 1 if a string
  * @s: input
  * Return: Always 0
  */
int is_palindrome(char *s)
{
	return (lucy_palindrome(s, 1));
}
