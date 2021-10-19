int max_in_array(int a[], int n)
{
  int i;
  int max = a[0];

  for (i = 1; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
  }
  return max;
}

int average(int a[], int n)
{
  int i, average = 0;
  for (i = 0; i < n; i++)
    average += a[i];

  return average / n;
}

int positives(int a[], int n)
{
  int i, total = 0;

  for (i = 0; i < n; i++)
    if (a[n] > 0)
      total++;

  return total;
}
