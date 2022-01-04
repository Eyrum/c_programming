#include <_ctype.h>

size_t my_strlen(const char *s)
{
  const char *p = s;

  while (*s)
    s++;
  return s - p; // s 指向空字符
  // while (*s++)
  //   ;
  // return s - p - 1; // s 指向空字符后的位置
}
