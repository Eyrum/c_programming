#include <stdio.h>

void reverse(int argc, char *argv[]);

int main(int argc, char *argv[])
{
  reverse(argc, argv);
  return 0;
}

void reverse(int argc, char *argv[])
{
  for (int i = argc - 1; i > 0; i--)
  {
    printf("%s ", argv[i]);
  }
  printf("\n");
}
