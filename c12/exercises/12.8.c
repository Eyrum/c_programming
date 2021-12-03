/*
void store_zeros(int a[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    a[i] = 0;
}
*/

void store_zeros(int a[], int n)
{
  int *p;

  for (p = a; p < a + n; p++)
    *p = 0;
}
