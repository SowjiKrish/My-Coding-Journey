#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][2],b[3][2],i,j;
printf("enter the value of a matrix\n");
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("enter the value of b matrix\n");
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
{
  scanf("%d",&b[i][j]);
}
}
printf("\n the a matrix is\n ");
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
  {
    printf("%d\t",a[i][j]);
  }
  printf("\n");
}
printf("\n the b matrix is\n");
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
{
  printf("%d\t",b[i][j]);
}
printf("\n");
}
return 0;
}
