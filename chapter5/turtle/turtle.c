#include <stdio.h>

typedef struct
{
  const char *name;
  const char *species;
  int age;
} turtle;

void happy_birthday(turtle *t) {
  t->age += 1;
  printf("happy birth day %i age!\n", t->age);
}

int main(int argc, char *argv[]) {
  turtle my_turtle = {"turtle", "Leatherback sea turtle", 99};
  happy_birthday(&my_turtle);
  return 0;
}
