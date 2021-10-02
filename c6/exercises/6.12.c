#include <stdio.h>

int main(void)
{
  int n;
  printf("Eneter a number: \n");
  scanf("%d", &n);

  for (int d = 2; d * d < n; d++)
    if (n % d == 0)
      break;

  return 0;
}
