#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter the string\n");
gets(str1);
strcpy(str2,str1);
strrev(str1);
if(strcmp(str1,str2)==0)
printf("The given string is palindrome");
else
printf("The given string is not a palindrome");
return 0;



}
