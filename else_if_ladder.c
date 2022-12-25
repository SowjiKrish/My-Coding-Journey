#include<stdio.h>
#include<conio.h>
int main()
{
  int s1,s2,s3,s4,s5,s6,sum,grade;
  printf("enter the marks of subjects");
  scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
  sum =s1+s2+s3+s4+s5+s6;
  printf("total marks=%d",sum);
  grade=sum/6;
  printf("grade of the person=%d",grade);
  if((grade>=75)&&(grade<=100))
  printf("O");
  else if((grade<=74)&&(grade>=55))
  printf("A");
  else if((grade<=54)&&(grade>=35))
  printf("B");
  else
  printf("fail");
  return 0;
}
