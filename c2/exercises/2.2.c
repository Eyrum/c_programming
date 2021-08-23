#include <stdio.h>

#define PI 3.1415f

int main(void)
{
  int r = 0;

  printf("enter the radius: ");
  scanf("%d", &r);

  printf("volume: %f", 4.0f / 3.0f * PI * r * r * r);

  return 0;
}
