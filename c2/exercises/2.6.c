#include <stdio.h>

int main(void)
{
  /* code */
  int x = 0;
  printf("Enter the x value:");
  scanf("%d", &x);

  printf("the calculated value: %d", ((((((3 * x) + 2) * x - 5) * x + 7) * x) - 6));
  return 0;
}
