#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;
  char s[100];

  scanf("%d%s%d", &i, s, &j); // enters 12abc34 56def78
  printf("%d\n", i); // 12
  printf("%s\n", s); // abc34
  printf("%d\n", j); // 56
  return 0;
}
