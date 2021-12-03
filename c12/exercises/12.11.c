int find_largest(int a[], int n);

int find_largest(int a[], int n)
{
  int *p = a;
  int largest = *p++;

  while (p++ < a + n)
    if (*p > largest)
      largest = *p;

  return largest;
}
