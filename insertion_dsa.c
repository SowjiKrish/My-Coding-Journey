#include<stdio.h>
#include<conio.h>
main()
{
  int a[100],i,pos,num,size;
  printf("enter size");
  scanf("%d",&size);
  printf("enter array elements\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("eneter the number");
  scanf("%d",&num);
  printf("enter position");
  scanf("%d",&pos);
  for(i=size;i>=pos-1;i--)
  {
    a[i+1]=a[i];
  }
  a[pos-1]=num;
  size++;
  printf("array for inserting");
  for(i=0;i<size;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}
