#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("%c", '\n');
  printf("%c", "\n"); // not work
  printf("%s", '\n'); // not work
  printf("%s", "\n");
  printf('\n'); // not work
  printf("\n");
  putchar('\n');
  putchar("\n"); // not work
  puts('\n'); // not work
  puts("\n");
  puts("");
  return 0;
}
