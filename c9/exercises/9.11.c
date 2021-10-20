#include <ctype.h>

float compute_GPA(char grades[], int n)
{

  float total = 0.0F;
  int i;

  for (i = 0; i < n; i++)
  {
    switch (toupper(grades[i]))
    {
    case 'A':
      total += 4.0F;
      break;
    case 'B':
      total += 3.0F;
      break;
    case 'C':
      total += 2.0F;
      break;
    case 'D':
      total += 1.0F;
      break;
    case 'F':
    default:
      break;
    }
  }
  return total / n;
}
