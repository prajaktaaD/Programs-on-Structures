#include<stdio.h>
 struct student
{
  char sec;
  int class;
  float classavg;
};

int main()
{
  struct student s[5],*p=s;
  int i;
  for(i=0;i<5;i++,p++)
  {
    printf("\nEnter class:");
    scanf("%d",&p->class);

    printf("\nEnter sec:");
    scanf(" %c",&p->sec);

    printf("\nEnter class avg:");
    scanf("%f",&p->classavg);
  }
    p=s;

    for(i=0;i<5;i++,p++)
    printf("\nclass:%d\tsec:%c\tclas average:%f\n",p->class,p->sec,p->classavg);

    return 0;
  
}


