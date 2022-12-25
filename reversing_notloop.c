#include<stdio.h>
int main()
{
  int c,num,d1,s,d2,d3,d4,p,r,k,g,j;
printf("enter 4 digit number\n");
scanf("%d",&num);
d1=num%10;
s=num/10;
d2=s%10;
s=s/10;
d3=s%10;
s=s/10;
d4=s%10;
c=d1*1000;
r=d2*100;
k=d3*10;
g=d4*1;
j=c+r+k+g;
printf("%d",j);
return 0;



}
