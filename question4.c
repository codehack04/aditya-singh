#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("the elements of the array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    printf("\n the smallest number of the array is %d\n",a[0]);
    printf("the greatest number of the array is %d\n",a[n-1]);
}

