#include <stdbool.h>
#include <stdio.h>

bool has_zero(int a[], int n)
{

  int i;

  for (i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      return true;
    }
  }

  return false;
}

int main(int argc, char const *argv[])
{
  printf("%d\n", has_zero(((int[]){1, 1}), 2));

  return 0;
}
