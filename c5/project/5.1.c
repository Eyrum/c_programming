#include <stdio.h>

int main(void)
{
  int value = 0, digits = 0;
  
  printf("Enter a number: ");
  scanf("%d", &value);

  if (value > 0 && value <= 9) {
    digits = 1;
  } else if (value > 9 && value <= 99) {
    digits = 2;
  } else if (value > 99 && value <= 999) {
    digits = 3;
  } else {
    printf("number is invalid");
    return 0;
  }

  printf("The number %d has  %d digits\n", value, digits);

  return 0;
}
