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
    int i,f=1;
    for(i=1;i<=s;i++)
    {
      f=f*i;
    }
    return f;


}
