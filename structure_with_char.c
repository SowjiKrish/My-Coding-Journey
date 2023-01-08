#include<stdio.h>
#include<conio.h>
struct employee
{
  int empno;
  float empsal;
  char empname;
}EMP;
int main()
{
printf("enter the employee number,salary,name\n");
scanf("%d\n %f\n %s\n",&EMP.empno,&EMP.empsal,EMP.empname);
printf("emp number=%d\nemp salary=%f\nemp name=%s",EMP.empno,EMP.empsal,EMP.empname);
return 0;



}
