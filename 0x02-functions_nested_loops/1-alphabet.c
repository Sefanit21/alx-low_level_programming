#include<stdio.h>
/**
 * print_alphabet - make the alphabet
 * Return: void
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
			{
		putchar(letter);
			}
	putchar('\n');
}
