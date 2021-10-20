double inner_product(double a[], double b[], int n)
{

  int i;
  double result;

  for (i = 0; i < n; i++)
    result += (a[i] * b[i]);

  return result;
}
