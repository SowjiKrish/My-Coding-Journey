#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter array length\n");
scanf("%d",&a);
int s[a];
printf("enter array elememts\n");
for(int i=0;i<=a+1;i++)
{
  scanf("%d",&s[i]);
}
printf("the given array is\n");
for(int j=0;j<=a+1;j++)
{
  printf("%d",s[j]);
}

return 0;
}
