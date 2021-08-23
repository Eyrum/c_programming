#include <stdio.h>

int main(void)
{
  float taxRate = 0.05f;
  float amount = 0.0f;

  printf("Enter an amount:");
  scanf("%f", &amount);

  printf("With tax added: $%.2f", (amount + (amount * taxRate)));
  return 0;
}
