#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int hour, minute;
  char c;
  printf("Enter a 24-hour time: ");
  scanf("%d :%d %c", &hour, &minute, &c);

  int current_time = (((toupper(c) == 'P' ? 12 : 0) + hour) * 60) + minute;

  int d1 = 8 * 60 + 0;
  int d2 = 9 * 60 + 43;
  int d3 = 11 * 60 + 19;
  int d4 = 12 * 60 + 47;
  int d5 = 14 * 60 + 0;
  int d6 = 15 * 60 + 45;
  int d7 = 19 * 60 + 0;
  int d8 = 21 * 60 + 45;

  printf("Closest departure time is ");

  if (current_time <= d1 + (d2 - d1) / 2)
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
  else if (current_time < d2 + (d3 - d2) / 2)
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
  else if (current_time < d3 + (d4 - d3) / 2)
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
  else if (current_time < d4 + (d5 - d4) / 2)
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
  else if (current_time < d5 + (d6 - d5) / 2)
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
  else if (current_time < d6 + (d7 - d6) / 2)
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  else if (current_time < d7 + (d8 - d7) / 2)
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  else
    printf("9:45 p.m., arriving at 11:58 p.m.\n");

  return 0;
}
