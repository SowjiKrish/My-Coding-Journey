#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,*c,*d,sum;
printf("enter any two numbers");
scanf("%d %d",&a,&b);
c=&a;
d=&b;
sum=*c+*d;
printf("sum =%d",sum);
return 0;
}
