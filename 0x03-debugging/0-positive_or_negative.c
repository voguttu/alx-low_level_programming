#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'Program that assigns a random number each
 * time it is executed and prints whether the number is
 * positive, negative or zero.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */

  if (n > 0)
    {
      printf("%d is positive\n", n);
      return;
    }
  else if (n == 0)
    {
      printf("%d is zero\n", n);
      return;
    }
  else if (n < 0)
    {
      printf("%d is negative\n", n);
      return;
    }
  return (0);
}
