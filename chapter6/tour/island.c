#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island
{
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

island* create(char* name)
{
  island *i = malloc(sizeof(island));
  printf("%p\n", i);
  i->name = strdup(name);
  printf("%s\n", i->name);
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}

void display(island *start)
{
  island *i;
  for (i = start; i != NULL; i = i->next)
  {
    printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
  }
}

void release(island *start)
{
  island *i = start;
  island *next = NULL;
  for (; i != NULL; i = next)
  {
    next = i->next; 
    free(i->name);
    free(i);
  }
}

int main(int argc, char *argv[])
{
  // island amity = {"Amity", "09:00", "17:00", NULL};
  // island craggy = {"Craggy", "09:00", "17:00", NULL};
  // island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  // island shutter = {"Shutter", "09:00", "17:00", NULL};
  // island skull = {"Skull", "09:00", "17:00", NULL};

  // char name[80];
  // printf("input name: ");
  // fgets(name, sizeof(name), stdin);
  // island *p_island0 = create(name);

  // printf("input name: ");
  // fgets(name, sizeof(name), stdin);
  // island *p_island1 = create(name);
  // p_island0->next = p_island1;
  // display(p_island0);

  island *start = NULL;
  island *i = NULL;
  island *next = NULL;
  char name[80];

  for (; fgets(name, sizeof(name), stdin) != NULL; i = next)
  {
    if (start == NULL)
      start = next;
    if (start != NULL)
      i->next = next;
  }
  display(start);
  release(start);
}