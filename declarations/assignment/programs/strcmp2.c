#include<stdio.h>

int str_cmp(char[],char[]);

int main(){

   char str1[100],str2[100];
   int cmp;

   printf("Enter first string: ");
   scanf("%s",str1);

   printf("Enter second string: ");
   scanf("%s",str2);

   cmp = str_cmp(str1,str2);

     if(cmp == 1)
        printf("Both strings are equal.\n");
     else
        printf("Both strings are not equal\n");
}

int str_cmp(char str1[],char str2[])
{
   int i=0,temp=0;
   while(str1[i]!='\0' && str2[i]!='\0')
   {
        if(str1[i]!=str2[i])
        {
            temp=1;
            break;
        }
        i++;
   }
   if (temp==0 && str1[i]=='\0' && str2[i]=='\0')
        return 1;
   else
        return 0;
}

