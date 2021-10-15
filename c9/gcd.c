#include <stdio.h>

int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int gcd1(int a, int b)
{
  if (b == 0)
    return a;
  return gcd1(b, a % b);
}

int main(void)
{
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  printf("GCD of %d %d: %d\n", a, b, gcd1(a, b));
  return 0;
}
