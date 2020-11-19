#include<stdio.h>

struct batch
{
  char sec;
  int class,roll[5];
};

int display(struct batch*);

int main()
{
  struct batch b,*p=&b;
  
  int i;
  printf("\nEnter class:");
  scanf("%d",&p->class);

  printf("\nEnter sec:");
  scanf(" %c",&p->sec);

  printf("\nEnter roll num of 5 students:");
  for(i=0;i<5;i++)
  scanf("%d",&p->roll[i]);

  display(p);

  return 0;
}

 int display(struct batch *q);
{
  printf("\nclass:%d\nsec:%c\n",q->class,q->sec);

  printf("\nRoll of 5 students:);
  for(i=0;i<5;i++)
  printf("%d",q->roll[i]);
  
  return 0;
}

