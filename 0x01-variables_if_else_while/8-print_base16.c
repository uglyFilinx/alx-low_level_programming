#include <stdio.h>

/**
 * main  Entry point 
 *
 * printing base 16 numbers
 *
 * Return: Always 0 (Success)\
 */

int main(void)
{
	char No;
	char ch;
	char Ascii = '\n';
	for (No = '0'; No <= '9'; No++)
	{
		putchar(No);
	}
        	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ASCII);
	return (0);
}
