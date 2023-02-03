#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,r;
  printf("enter number of rows");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  getch();
}
