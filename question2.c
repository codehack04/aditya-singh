#include<stdio.h>
void main()
{

    int a[100],i,n,sum=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the %d elements of the array ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0|| i%2==0)
        {
           sum=sum+a[i];
        }
    }
    printf("\n sum of the even elements and the elements present in even position are:=%d ",sum);

}




