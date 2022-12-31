#include<stdio.h>
#include<conio.h>
int division(int,int);
void main()
{
  int a,b,c;
  printf("enter any two numbers");
  scanf("%d %d",&a,&b);
  c= division(a,b);
  printf("division of two numbers=%d",c);
}
  int division(int x,int y)
  {
    int result = x/y;
    return result;
  }
