#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float percent;
    printf("enter the marks of the five subject\n");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    percent=(a+b+c+d+e)/500*100;
    if(percent>=90)
    {
         printf("your grade is A\n");
    }
    else if(percent>=80 && percent<90)
    {
        printf("your grade is B\n");
    }
    else if(percent>=70 && percent<80)
    {
        printf("your grade is C\n");
    }
    else if(percent>=60 && percent<70)
    {
        printf("your grade is D\n");
    }
    else if(percent>=40 && percent<60)
    {
        printf("your grade is E\n");
    }
    else
    {
        printf("beta tumse na ho paega\n");
    }
return 0;
}
