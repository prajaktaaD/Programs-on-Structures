#include<stdio.h>

struct abc
    {
      char c;
      int a;
     
    };

    struct xyz
    {
      float f;
      struct abc m;
    }k,*p=&k;               


int main()
{
  printf("\nEnter character:");
  scanf("%c",&p->m.b);

  printf("\nEnter int:");
  scanf("%d",&p->m.a);


  printf("\nEnter float:");
  scanf("%f",&p->f);

  printf("\nchar:%c\nint:%d\nfloat:%f",p->m.b,p->m.a,p->f);

  return 0;
}






