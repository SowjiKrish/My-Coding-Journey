#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
  int a,b,c;
  printf("enter any two numbers");
  scanf("%d %d",&a,&b);
  c= add(a,b);
  printf("addition of two numbers=%d",c);
}
  int add(int x,int y)
  {
    int result = x+y;
    return result;
  }
