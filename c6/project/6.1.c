#include <stdio.h>

int main(void)
{
  float val;
  for (;;)
  {
    printf("Enter a number: ");
    scanf("%f", &val);
    if (val <= 0)
      return 0;
    printf("%.2f\n", val);
  }

  return 0;
}
