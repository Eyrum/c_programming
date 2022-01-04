char *my_strcat(char *s1, const char *s2)
{
  char *p = s1;

  while (*p)
    p++;
  // while (*s2)
  // {
  //   *p = *s2;
  //   p++;
  //   s2++;
  // }

  // *p = '\0';
  while (*p++ = *s2++)
    ;
  return s1;
}
