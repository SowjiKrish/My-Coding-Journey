#include<stdio.h>
int main()
{
int p;
int t;
int r;
printf("enter principle amount=  ");
scanf("%d",&p);
printf("enter period of time= ");
scanf ("%d",&t);
printf("enter rate of interst");
scanf ("%d",&r);
printf("simple interest= ");
float s=(p*t*r)/100;
printf("%f",s);
return 0;



}
