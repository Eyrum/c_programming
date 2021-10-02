#include <stdio.h>

int main(void)
{
  int i, denom;
  float e, item, epsilon;

  printf("Enter epsilon: ");
  scanf("%f", &epsilon);

  for (i = 1, denom = 1, e = 1.0f, item = 1.0f; item > epsilon; i++)
  {
    item = 1.0f / (denom *= i);
    e += item;
  }

  printf("Approximation of e: %f\n", e);

  return 0;
}
