#include<stdio.h>
#include<conio.h>
int sowji(int,int);//function declaration
int main(){
  int s =sowji(5,5);//function calling
  printf("%d",s);
  return 0;
}
int sowji(int a,int b)//function definition
{
return a*b;
}
