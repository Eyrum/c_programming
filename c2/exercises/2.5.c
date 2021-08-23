#include <stdio.h>

int main(void)
{
  int x = 0;
  printf("Enter the x value:");
  scanf("%d", &x);
  
  printf("the calculated value: %d", (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
  return 0;
}
