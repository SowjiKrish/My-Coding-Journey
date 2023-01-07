#include<stdio.h>
#include<conio.h>
int main()
{
  int a,i,count=0;
  printf("enter any number\n");
  scanf("%d",&a);
  for(i=2;i<(a/2);i++)
{
  if (a%i==0)
  {
    count++;
    break;
  }
}
  if (count==0)
  {
  printf("%d is a prime number",a);
  }
  else
  {
    printf("%d is not a prime number",a);
  }
  return 0;
}
