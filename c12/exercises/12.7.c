#include <stdbool.h>

bool search(const int a[], int n, int key);

bool search(const int a[], int n, int key)
{
  const int *p;
  // for (p = &a[0]; p < &a[n]; p++)
  for (p = a; p < a + n; p++)
  {
    if (*p == key)
      return true;
  }

  return false;
}
