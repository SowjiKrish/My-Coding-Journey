#include<stdio.h>
int main()
{
  int s;
  printf("enter array size\n");
  scanf("%d",&s);
  int a[s];
  printf("enter array elements\n");
  for(int i=0;i<s;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("the given array elements are\n");
  for(int j=0;j<s;j++)
  {
    printf("%d\n",a[j]);
  }
  int max=a[0];
  for(int t=1;t<s;t++)
  {
    if(max<a[t])
    {
      max=a[t];
    }
  }
   printf("maximum number in an array is %d\n",max);
    return 0;
}
