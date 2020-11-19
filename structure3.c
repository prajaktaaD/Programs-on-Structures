#include<stdio.h>

struct batch
{
  char sec;
  int class,roll[5];
};

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

  printf("\nclass:%d\nsec:%c\n",b.class,b.sec);

  printf("\nRoll of 5 students:);
  for(i=0;i<5;i++)
  printf("%d",b.roll[i]);
  

  return 0;
}
