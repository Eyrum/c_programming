#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool test_extension(const char *file_name, const char *extension)
{
  while (*file_name++ != '.')
    ;

  while (*file_name && *extension)
    if (toupper(*file_name++) != toupper(*extension++))
      return false;
  return true;
}

int main(int argc, char const *argv[])
{
  printf("result: %d\n", test_extension("test.html", "HTML"));
  return 0;
}
