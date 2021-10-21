#include <stdio.h>

#define MAX_LEN 100

void swap(int a[], int x, int y);
void selection_sort(int a[], int n);

int main(void)
{
  int i, c, n, a[MAX_LEN];

  printf("Enter list of integers to be sorted: ");
  for (i = 0, n = 0; i < MAX_LEN; i++)
  {
    scanf(" %d", &a[i]);
    n++;
    if ((c = getchar()) == '\n')
      break;
    ungetc(c, stdin);
  }

  selection_sort(a, n);

  printf("Sorted list:");
  for (i = 0; i < n; i++)
  {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}

void swap(int a[], int x, int y)
{
  int temp;
  temp = a[x];
  a[x] = a[y];
  a[y] = temp;
}

void selection_sort(int a[], int n)
{
  if (n == 0)
    return;
  int i, largest = 0;

  for (i = 0; i < n; i++)
  {
    if (a[i] > a[largest])
      largest = i;
  }

  swap(a, largest, n - 1);

  selection_sort(a, n - 1);
}
