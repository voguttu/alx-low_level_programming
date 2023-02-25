#include <stdio.h>

int islower(int c);

int main(void)
{
	int ch = 'a';

	if (islower(ch))
	printf("lower case.'\n'");
		else
			printf("NOT lower case.'\n'");
	return (1, 0);
}
