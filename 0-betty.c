#include "shell.h"

/**
 * main - Prints letters a to z
 *
 *Return: 0 if successfully
 */
int main(void)
{
	char letter = 'A';

	while (letter <= 'Z')
	{
		write(1, &letter, 1);
		write(1, "\n", 1);
		letter++;
	}
	return (0);
}
