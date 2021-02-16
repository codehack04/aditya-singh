#include<stdio.h>
void main()
{
    char Str[100],n=0,i;
    printf("enter the string\n");
    scanf("%s",Str);
    for(i=0;Str[i]!='\0';i++)
    {
        ++n;
    }
    printf("Length of the string is %d",n);

}
