#include <stdio.h>

 /**
  * main - Entry point 
  * Description: program that prints the alphabet in lowercase
  * Return: 0 (Success)
  */
 int main(void)
 {      
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	 putchar('\n');

	 return (0);
}
