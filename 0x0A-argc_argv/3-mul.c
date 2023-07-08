#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: count of argument
  * @argv: array of pointer to a string
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
		printf("Error\n");
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
