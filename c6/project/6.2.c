#include <stdio.h>

int main(void)
{
  int v1, v2;
  printf("Enter two integers: ");
  scanf("%d %d", &v1, &v2);

  while (v2 != 0)
  {
    int r = v2;
    v2 = v1 % v2;
    v1 = r;
  }

  printf("Greatest common divisor: %d\n", v1);

  return 0;
}
