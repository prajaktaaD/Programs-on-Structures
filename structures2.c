#include<stdio.h>

struct batch
{
  char name[10];
  char sec;
  int class;
};

int main()
{
  struct batch b,*p=&b;
  printf("\nEnter name:");
  scanf("%s",p->name);

  printf("\nEnter class:");
  scanf("%d",&p->class);

  printf("\nEnter sec:");
  scanf(" %c",&p->sec);

  printf("\nname:%s\nclass:%d\nsec:%c\n",p->name,p->class,p->sec);

  return 0;
}

