#include<stdio.h>
#include<conio.h>
void sowji(int deepu[5])
{
  for(int i=0;i<5;i++)
  {
    printf("%d\n",deepu[i]);
  }
}
int main()
{
  int deepu[5]={1,2,3,4,5};
  sowji(deepu);
  return 0;
}
