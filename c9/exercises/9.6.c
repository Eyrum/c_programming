int digit(int n, int k)
{
  while (k-- > 1)
  {
    if (n /= 10 <= 0)
      return 0;
  }
  return n % 10;
}
