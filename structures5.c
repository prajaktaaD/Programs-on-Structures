#include<stdio.h>

struct batch
{
  char sec;
  int class,roll[5];
};

int display(struct batch);

int main()
{
  struct batch b;
  
  int i;
  printf("\nEnter class:");
  scanf("%d",&b.class);

  printf("\nEnter sec:");
  scanf(" %c",&b.sec);

  printf("\nEnter roll num of 5 students:");
  for(i=0;i<5;i++)
  scanf("%d",&b.roll[i]);

  display(b);

  return 0;
}

 int display(struct batch a);
{
  printf("\nclass:%d\nsec:%c\n",a.class,a.sec);

  printf("\nRoll of 5 students:);
  for(i=0;i<5;i++)
  printf("%d",a.roll[i]);
  
  return 0;
}

