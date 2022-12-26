#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
  int a,b;
  printf("enter any two values");
  scanf("%d %d",&a,&b);
  printf("before swap\n");
  printf("a=%d\n b=%d\n",a,b);
  swap(&a,&b);
  printf("after swap\n");
  printf("a=%d\n b=%d\n",a,b);
}
  void swap(int *x,int *y)
  {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  //  printf("%d %d",x,y);
  }
