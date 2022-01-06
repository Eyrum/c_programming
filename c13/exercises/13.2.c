#include <stdio.h>

int main(void)
{
  char *p = "abc";

  putchar(p); // illegal putchar expects a char, receives a pointer to char.
  putchar(*p); // a
  puts(p); // abc\n
  puts(*p); // illegal puts expects a char * and receives a char
  return 0;
}
