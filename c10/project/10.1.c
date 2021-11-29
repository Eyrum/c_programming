#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void stack_overflow()
{
  printf("\nstack overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow()
{
  printf("\nstack underflow\n");
  exit(EXIT_FAILURE);
}

void push(char c)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = c;
}

char pop(void)
{
  if (is_empty())
    stack_underflow();

  return contents[--top];
}

int main(void)
{
  char ch;
  printf("Enter parenteses and / or braces: ");

  while ((ch = getchar()) != '\n')
  {
    printf("char: %c \n", ch);
    if (ch == ')' && pop() != '(')
    {
      printf("Parentheses/braces are not nested properly\n");
      return 0;
    }
    else if (ch == '}' && pop() != '{')
    {
      printf("Parentheses/braces are not nested properly\n");
      return 0;
    }
    else if (ch == '(' || ch == '{')
      push(ch);
   
  }

  if (!is_empty())
  {
    printf("top: %d\n", top);
    printf("Parentheses/braces are not nested properly\n");
    return 0;
  }

  printf("Parentheses/braces are nested properly\n");

  return 0;
}
