#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} inventroy[MAX_PARTS];

int num_parts = 0;

int find_part(int nubmer);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
  char code;

  for (;;)
  {
    printf("Enter operate code :");
    scanf(" %c", &code);
    while (getchar() != '\n')
      ;

    switch (code)
    {
    case 'i':
      insert();
      break;
    case 's':
      search();
      break;
    case 'u':
      update();
      break;
    case 'p':
      print();
      break;
    case 'q':
      return 0;
    default:
      printf("Illegal code\n");
      break;
    }
    printf("\n");
  }
  return 0;
}

int find_part(int number)
{
  int i;

  for (i = 0; i < num_parts; i++)
    if (inventroy[i].number == number)
      return i;
  return -1;
}

void insert(void)
{
  int part_number;

  if (part_number == MAX_PARTS)
  {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf(" %d", &part_number);

  if (find_part(part_number) >= 0)
  {
    printf("Part already exists.\n");
    return;
  }

  inventroy[num_parts].number = part_number;
  printf("Enter part name: ");
  reade_line(inventroy[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf(" %d", &inventroy[num_parts].on_hand);
  num_parts++;
}

void search(void)
{
  int i, number;

  printf("Enter part number ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0)
  {
    printf("Part name: %s\n", inventroy[i].name);
    printf("Quantity on hand: %d\n", inventroy[i].on_hand);
  }
  else
  {
    printf("Part not found.\n");
  }
}

void update(void)
{
  int i, number, change;
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0)
  {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventroy[i].on_hand += change;
  }
  else
  {
    printf("Part not found.\n");
  }
}

void print(void)
{
  int i;
  printf("Part Number    Part Name                               ""Quantity on Hand\n");
  for(i = 0; i < num_parts; i++) {
    printf("%7d    %-25s%11d\n", inventroy[i].number, inventroy[i].name, inventroy[i].on_hand);
  }
}
