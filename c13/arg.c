#include <stdio.h>

int main(int argc, char *argv[])
{
  for (int i = 1; i < argc; i++)
    printf("%s\n", argv[i]);

  char **p;

  for (p = &argv[1]; *p != NULL; p++)
    printf("%s\n", *p);

  return 0;
}
