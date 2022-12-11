#include <stdio.h>
#include <string.h>

int NUM_ADS = 7; 
char *ADS[] = { 
  "William: SBM GSOH likes sports, TV, dining",
  "Matt: SWM NS likes art, movies, theater",
  "Luis: SLM ND likes books, theater, art",
  "Mike: DWM DSlikes trucks, sports and bieber",
  "Peter: SAM likes chess, working out and art", 
  "Josh: SJM likes sports, movies and theater", 
  "Jed: DBM likes theater, books and dining"
};

int sports_no_bieber(char *s)
{
  return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s)
{
  return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char *s)
{
  return strstr(s, "NS") && strstr(s, "theater");
}



void find(int (*match)(char*))
{
  int i;
  puts("Search results: ");
  puts("----------------------------------");

  for (i = 0; i < 7; i++)
  {
    if (match(ADS[i]))
      printf("%s\n", ADS[i]);
  }
  puts("----------------------------------");
}

int main(int argc, char *argv[])
{
  find(sports_no_bieber);
  find(ns_theater);
  return 0;
}