#include <stdio.h>

/**
*main - contains the main function
*
*Return: returns something back
*/

int main(void)
{
	char j;
	int i;
	
	for (i  = 0 ; i < 10; i++)
		putchar(i + '0');
	for (j  = 'a' ; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}

