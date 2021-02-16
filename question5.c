#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<=(5/2))
            {
                if(i==j || j==4-i)
                {
                    printf("*");
                }
                 else
                {
                    printf(" ");
                }
            }
            else
                {
                    if(i==j || j==4-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
        }
        printf("\n");
    }
}
