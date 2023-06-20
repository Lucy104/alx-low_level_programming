#include <stdio.h>
#include "main.h"

/**
  * _abs - check the code
  * @i: parameter
  * Return: 0 (Success)
  */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i == 0)
		return (i);

	return (i * -1);
}
