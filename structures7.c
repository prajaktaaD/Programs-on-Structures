#include<stdio.h>
 struct student
{
  char sec;
  int class;
  float classavg;
};

int main()
{
  struct student s[5];
  int i;
  for(i=0;i<5;i++)
  {
    printf("\nEnter class:");
    scanf("%d",&s[i].class);

    printf("\nEnter sec:");
    scanf(" %c",&s[i].sec);

    printf("\nEnter class avg:");
    scanf("%f",&s[i].classavg);
  }

    for(i=0;i<5;i++)
    printf("\nclass:%d\tsec:%c\tclas average:%f\n",s[i].class,s[i].sec,s[i].classavg);

    return 0;
  
}

