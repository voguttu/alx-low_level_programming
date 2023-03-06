#include "main.h"

/**
  * swap_int - Function that swaps two integers
  *
  * @a: first value
  * @b: second value
  *
  * Return: Void
  */

void swap_int(int *a, int *b)
{
	int temp_hld;

	temp_hld = *a;
	*a = *b;
	*b = temp_hld;
}
