#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: count of argument
  * @argv: array of pointer to a string
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
