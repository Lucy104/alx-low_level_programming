#include <stdio.h>
#include "main.h"

/**
  * _islower - prototype
  * @c: a parameter
  * Description: a  function that checks for lower character.
  * Return: 0 (Success)
  */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
