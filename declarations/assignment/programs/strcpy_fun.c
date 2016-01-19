#include <stdio.h>

char str1[100], str2[100],a, i,*n;

int main()
{

   printf("Enter string str1: ");
   scanf("%s",str1);
   str_copy(str2);
   printf("String str2: %s\n",str2);
}


int str_copy(int a)
{
   for(i=0; str1[i]!='\0'; ++i)
   {
       str2[i]=str1[i];
   }
   str2[i]='\0';

   return str2;
}
