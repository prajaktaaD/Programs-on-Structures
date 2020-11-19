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
    }k;               


int main()
{
  printf("\nEnter character:");
  scanf("%c",&k.m.b);

  printf("\nEnter int:");
  scanf("%d",&k.m.a);


  printf("\nEnter float:");
  scanf("%f",&k.f);

  printf("\nchar:%c\nint:%d\nfloat:%f",k.m.b,k.m.a,k.f);

  return 0;
}

