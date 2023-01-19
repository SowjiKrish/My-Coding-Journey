#include<stdio.h>

int main(){
    int a[5],n,i,j,temp,swap;
    printf("enter the range of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d of element is %d\n",i+1,a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<n-1-i;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swap++;
        }
        else
        continue;
        }
    if(swap==0)
    break;
    }
    printf("elements after sorted\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
