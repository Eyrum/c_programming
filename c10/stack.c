#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
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

void push(int i)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop(void)
{
  if (is_empty())
    stack_underflow();

  return contents[--top];
}
