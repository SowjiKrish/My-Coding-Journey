#include<stdio.h>
#include<conio.h>
struct name
{
  int a;
  float b;
}D;
int main()
{
  printf("enter the value of a");
  scanf("%d",&D.a);
  printf("enter the value of b");
  scanf("%f",&D.b);
  printf("the value of a=%d",D.a);
  printf("the value of b=%f",D.b);
  return 0;
}
