#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
  char ch, op1, op2;

  while (true)
  {
    printf("Enter an RPN expression: ");

    while ((ch = getchar()) != '\n')
    {
      if (isdigit(ch))
      {
        push(ch - '0');
      }
      else
      {
        switch (ch)
        {
          case '+':
            push(pop() + pop());
            break;
          case '-':
            op2 = pop();
            op1 = pop();
            push(op1 - op2);
            break;
          case '*':
            push(pop() * pop());
            break;
          case '/':
            op2 = pop();
            op1 = pop();
            push(op1 / op2);
            break;
          case '=':
            printf("Value of expression: %d\n", pop());
            break;
          case ' ':
            break;
          default:
            exit(EXIT_FAILURE);
        }
      }
    }
  }

  return 0;
}
