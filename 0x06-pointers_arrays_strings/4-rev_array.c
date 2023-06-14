#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  *
  * @a: an array of integers
  * @n: number of elements of the array
  *
  * Return: Void
  */

void reverse_array(int *a, int n)
{
	int ol_a, rev_a, temp;

	if (n <= 1)
	{
		return;
	}
	else
	{
		ol_a = 0;
		rev_a = n - 1;

		while (ol_a < rev_a)
		{
			temp = a[ol_a];
			a[ol_a] = a[rev_a];
			a[rev_a] = temp;
			ol_a++;
			rev_a--;
		}
	}
}
