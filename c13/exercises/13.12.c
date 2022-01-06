#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension)
{
  while (*file_name)
  {
    if (*file_name++ == '.')
    {
      strcpy(extension, file_name);
      return;
    }
  }
  strcpy(extension, "");
}

int main(int argc, char const *argv[])
{
  char file_name[] = "test.html";
  char extension[] = "";
  get_extension(file_name, extension);

  printf("extension: %s\n", extension);
  return 0;
}

