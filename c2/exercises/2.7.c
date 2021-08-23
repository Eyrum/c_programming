#include <stdio.h>

int main(void)
{
  int amount = 0;

  int twentyD = 20;
  int tenD = 10;
  int fiveD = 5;
  int oneD = 1;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  printf("$20 bills: %d\n", amount / twentyD);
  amount = amount - (twentyD * (amount / twentyD));

  printf("$10 bills: %d\n", amount / tenD);
  amount = amount - (tenD * (amount / tenD));

  printf("$5 bills: %d\n", amount / fiveD);
  amount = amount - (fiveD * (amount / fiveD));

  printf("$1 bills: %d\n", amount / oneD);
  amount = amount - (oneD * (amount / oneD));

  return 0;
}
