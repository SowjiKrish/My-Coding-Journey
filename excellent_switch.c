#include<stdio.h>
int main()
{
  char grade;
  printf("enter grade\n");
  scanf("%c",&grade);
  switch(grade)
  {
    case 'O':
    printf("Excellent");
    break;
    case 'A':
    printf("Good");
    break;
    case 'B':
    printf("ok");
    break;
    case 'C':
    printf("Fail");
    break;
    default:
    printf("other than this invalid");
    break;
  }
return 0;

}
