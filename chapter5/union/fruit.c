typedef union
{
  short count;
  float weight;
  float volume;
} quantity;

typedef struct
{
  const char *name;
  const char *country;
  quantity amount;
} fruit_order;


int main(int argc, char *argv[]) {
  fruit_order apples = {"apples", "England"};
  apples.amount.weight=4.2;

  printf("This order contains %2.2f lbs of %s\n", apples.amount.weight, apples.name);
}