#include<stdio.h>
int main()
{
   char c;
   printf("enter the character:");
   scanf("%c",&c);
   if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=="A" || c=="E" || c=="I" || c=="O" || c=='U')
   {
       print("%c is a vowel.",c);
   }
   else
   {
       print("%c is consonant.",c);
   }
return 0;

}