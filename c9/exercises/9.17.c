#include <stdio.h>

int fact(int n)
{
  int result = 1;

  while (n > 1)
    result *= n--;

  return result;
}

int main(void)
{
  printf("%d\n", fact(3));
  return 0;
}
