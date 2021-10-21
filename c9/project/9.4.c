#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_words(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
  int count1[26] = {0}, count2[26] = {0};

  read_words(count1);
  read_words(count2);

  if(equal_array(count1, count2))
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");
  
  return 0;
}

void read_words(int counts[26])
{

  char c;

  printf("Enter word: ");
  while ((c = getchar()) != '\n')
    if (isalpha(c))
      counts[toupper(c) - 'A']++;
}

bool equal_array(int c1[26], int c2[26])
{
  int i;
  for (i = 0; i < 26; i++)
  {
    if (c1[i] != c2[i])
      return false;
  }
  return true;
}
