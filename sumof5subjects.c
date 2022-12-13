#include<stdio.h>
int main ()
{
  int sub1,sub2,sub3,sub4,sub5;
  printf ("enter the marks of the subjects= \n");
  scanf ("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  int sum=sub1+sub2+sub3+sub4+sub5;
  printf ("%d",sum);
  float p=(sub1+sub2+sub3+sub4+sub5)/100;
  printf("%f",p);
  return 0;




}
