#include <stdio.h>

/**
*main - contains the main function
*
*Return: returns something back
*/
int main(void)
{
	char i;
	
	for (i  = 'a' ; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}


