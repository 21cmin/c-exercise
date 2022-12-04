#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
  printf("The value of INT_MAX is %d\n", INT_MAX);
  printf("The value of INT_MIN is %d\n", INT_MIN);
  printf("An int takes %lu bytes\n", sizeof(int));

  printf("The value of FLT_MAX is %f\n", FLT_MAX);
  printf("The value of FLT_MIN is %f\n", FLT_MIN);
  printf("An int takes %lu bytes\n", sizeof(float));
  return 0;
}