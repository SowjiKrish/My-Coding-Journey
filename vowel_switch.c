#include<stdio.h>
#include<conio.h>
int main()
{
  char sowji;
  printf("enter any letter\n");
  scanf("%c",&sowji);
  switch(sowji)
{
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  printf("%c is an vowel",sowji);
  break;
  default:
  printf("invalid input");
  break;
}
  return 0;

}
