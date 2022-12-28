#include<stdio.h>
#include<conio.h>
int multiplication(int,int);
void main()
{
  int a,b,c;
  printf("enter any two numbers");
  scanf("%d %d",&a,&b);
  c= multiplication(a,b);
  printf("multiplication of two numbers=%d",c);
}
  int multiplication(int x,int y)
  {
    int result = x*y;
    return result;
  }
