#include <stdio.h>

int polynomial(int x);
int power(int x, int n);

int main(void)
{
  int x;

  printf("Enter an integer: ");
  scanf("%d", &x);
  printf("Result: %d\n", polynomial(x));

  return 0;
}

int power(int x, int n)
{
  return n == 0 ? 1 : x * power(x, n - 1);
}

int polynomial(int x)
{
  return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}
