/*
int sum_array(const int a[], int n)
{
  int i, sum;

  sum = 0;
  for (i = 0; i < n; i++)
    sum += a[i];
  return sum;
}
*/

int sum_array(const int a[], int n)
{
  int i, sum, *p;

  sum = 0;
  for (p = &a[0]; p < &a[n]; p++)
    sum += *p;
  return sum;
}
