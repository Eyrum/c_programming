#include <stdio.h>

int main(void)
{
  printf("%10.2e\n", 30.253);
  printf("%-6.12g\n", .0000009979);
  printf("%-6.2g", .0000009979);
  return 0;
}
