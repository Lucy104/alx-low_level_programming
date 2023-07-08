#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
  * main - entry point
  * @argc: count of argument
  * @argv: array of pointer to a string
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int add = 0;
	int i, z;

	i = 1;
	while (i < argc)
	{
		for (z = 0; argv[i][z] != '\0'; z++)
		{
			if (!isdigit(argv[i][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);

	return (0);
}
