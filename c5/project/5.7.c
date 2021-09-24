#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4;
  int min, max;
  int min1, max1;
  int min2, max2;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  if (n1 < n2) {
    min1 = n1;
    max1 = n2;
  } else {
    min1 = n2;
    max1 = n1;
  }

  if (n3 < n4) {
    min2 = n3;
    max2 = n4;
  } else {
    min2 = n4;
    max2 = n3;
  }

  if (min1 < min2) {
    min = min1;
  } else {
    min = min2;
  }

  if (max1 < max2) {
    max = max2;
  } else {
    max = max1;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
