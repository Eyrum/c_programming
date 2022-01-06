#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url)
{
  strcpy(index_url, "http:////www.");
  strcat(strcat(index_url, domain), "//index.html");
}

int main(int argc, char const *argv[])
{
  char index_url[100] = "";
  char domain[] = "test.com";
  build_index_url(domain, index_url);
  printf("index_url: %s\n", index_url);
  return 0;
}
