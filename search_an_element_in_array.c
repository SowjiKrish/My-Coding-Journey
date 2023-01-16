#include<stdio.h>
#include<conio.h>
int main()
{
int s,a[]={5,6,8,9,7};
printf("enter any search element\n");
scanf("%d",&s);
int i;
for( i=0;i<5;i++)
{
  if(a[i]==s)
    {
printf("element found");
break;}
}
if(i==5)
printf("element not found");
return 0;
}
