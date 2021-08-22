/* Computes the dimensional weight of a 12" x 10" x 8" */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;

  volume = height * width * length;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume: %d\n", volume);
  printf("Dimensions Weight: %d\n", weight);

  return 0;
}
