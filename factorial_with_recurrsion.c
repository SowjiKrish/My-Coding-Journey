#include<stdio.h>
int factorial(int);
void main()
{
    int s,ans;
    printf("enter any number");
    scanf("%d",&s);
    ans=factorial(s);
    printf("%d",ans);
  }
int factorial(int s)
{
  if(s>0)
  {
    return s*factorial(s-1);

  }
else
return 1;}
