#include <stdio.h>

#define MONTH_SCALE 31
#define YEAR_SCALE 365

int main(void)
{
  int d1, m1, y1;
  int d2, m2, y2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d / %d / %d", &m1, &d1, &y1);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d / %d / %d", &m2, &d2, &y2);

  int date1 = d1 + m1 * MONTH_SCALE + y1 * YEAR_SCALE;
  int date2 = d2 + m2 * MONTH_SCALE + y2 * YEAR_SCALE;

  if (date1 == date2)
    printf("%d/%d/%.2d is equal %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
  else if (date1 > date2)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
  else
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);

  return 0;
}
