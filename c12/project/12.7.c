#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
  int a[N], i, max, min;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  max_min(a, N, &max, &min);

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
  int *p;
  *max = *min = a[0];
  for (p = a + 1; p < a + n; p++)
  {
    if (*p > *max)
      *max = *p;
    else if (*p < *min)
      *min = *p;
  }
}
