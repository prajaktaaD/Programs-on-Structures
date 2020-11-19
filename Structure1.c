#include<stdio.h>

struct batch
{
  char name[10];
  char sec;
  int class;
};

int main()
{
  struct batch b;
  printf("\nEnter name:");
  scanf("%s",b.name);

  printf("\nEnter class:");
  scanf("%d",&b.class);

  printf("\nEnter sec:");
  scanf(" %c",&b.sec);

  printf("\nname:%s\nclass:%d\nsec:%c\n",b.name,b.class,b.sec);

  return 0;
}

