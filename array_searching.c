#include<stdio.h>
#include<conio.h>
void main()
{
int count ,s,a[]={4,5,6,7,8};
printf("enter any element");
scanf("%d",&s);
for(int i=0;i<5;i++)
{
  if(a[i]==s)
  {
  count=1;
    break;
  }
}
if(count==1)
printf("element is found");
else
printf("element not found");



}
