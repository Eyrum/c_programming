#include <stdio.h>
#include <ctype.h>

// void capitalize(char str[])
// {
//   int i = 0;

//   while (str[i] != '\0')
//   {
//     if (isalpha(str[i]))
//       toupper(str[i]);
//     i++;
//   }
// }

void capitalize(char *str)
{
  char *c = str;

  while (*c != '\0')
  {
    if (isalpha(*c))
      printf("%c", *c);
      toupper(*c);
    c++;
  }
}
int main()
{
  char str[] = "qaq";

  capitalize(str);
  
  printf("capitalize: %s\n", str);

  return 0;
}
