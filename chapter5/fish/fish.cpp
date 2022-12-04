#include <stdio.h>

struct exercise {
  const char *description; 
  float duration;
};

struct meal {
  const char *ingredients; 
  float weight;
};

struct  preferences 
{
  struct meal food;
  struct exercise exercise;
};

struct fish
{
  const char *name;
  const char *species;
  int teeth;
  int age;
  struct preferences care;
};


void catalog(const fish f)
{
  printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(const fish f)
{
  printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\nFeed with %.1f lbs of %s and allow to %s for %.1f hours\n", f.name, f.species, f.age, f.teeth, f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

int main(int argc, char *argv[])
{
  struct fish snappy = {"Snappy", "Pranha", 69, 4, {{"meat", 0.2}, {"swaim in the jacuzzi", 7.5}}};
  catalog(snappy);
  label(snappy);
  printf("Snappy likes to eat %s\n", snappy.care.food);
  return 0;
}