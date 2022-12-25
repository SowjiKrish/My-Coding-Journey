#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float a,b,c,d,x,y,z;
  printf("enter any three values");
  scanf("%f %f %f",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d<0)
  {
    printf("the real roots are\n");
    x=-b+sqrt(d)/(2*a);
    y=-b-sqrt(d)/(2*a);
    printf("%f %f",x,y);
  }
  else if(d==0)
  {
    printf("equal roots");
    z=-b/(2*a);
    printf("%f",z);
  }
else
{
  printf("imaginery roots");
}
return 0;

}
