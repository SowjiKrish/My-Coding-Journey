#include<stdio.h>
#include<conio.h>
int subtraction(int,int);
void main()
{
  int a,b,c;
  printf("enter any two numbers");
  scanf("%d %d",&a,&b);
  c= subtraction(a,b);
  printf("multiplication of two numbers=%d",c);
}
  int subtraction(int x,int y)
  {
    int result = x-y;
    return result;
  }
