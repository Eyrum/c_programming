#include <stdio.h>

void censor(char *str)
{
  char *c = str;
  while (*(c + 2) != '\0')
  {
    if (*c == 'f' && *(c + 1) == 'o' && *(c + 2) == 'o')
      *c = *(c + 1) = *(c + 2) = 'x';
    c++;
  }
}

int main(int argc, char const *argv[])
{
  char str[] = "foo f00 foo";
  censor(str);
  printf("%s\n", str);
  return 0;
}
