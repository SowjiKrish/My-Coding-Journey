#include<stdio.h>
int main()
{
  int a,b;
  printf ("enter any variable");
  scanf ("%d",&a);
  printf ("enter an other variable");
  scanf ("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf ("swapping of numbers= %d %d",a,b);
  return 0;

}
