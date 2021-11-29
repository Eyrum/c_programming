void swap(int *p, int *q);

void swap(int *p, int *q)
{
  int temp = *q;
  *q = *p;
  *p = temp;
}
