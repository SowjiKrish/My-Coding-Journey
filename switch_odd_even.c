#include<stdio.h>
int main()
{
  int a;
  printf("enter any number from 1 to 10\n");
  scanf("%d",&a);
  switch(a)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
  printf("%d is odd number",a);
  break;
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  printf ("%d is even number",a);
  break;
  default:
  printf("invalid input");
  break;
}
  return 0;
}
