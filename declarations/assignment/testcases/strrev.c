/*
#include <stdio.h>
#include <string.h>
int main()
{
   char *str;
   int i,len;
   printf("Enter String : ");
   scanf("%s",str);
   len=strlen(str)-1;
   for(i=0;i<strlen(str)/2;i++)
   {
         str[i]+=str[len];
         str[len]=str[i]-str[len];
         str[i]=str[i]-str[len--];
   }
   printf("Reverse String is : %s",*str);
   printf("%u\n" );

   return 0;
}
*/ 


#include<stdio.h>
#include<string.h>
        
          int main()
          {
           int j,l,i;
           char s[10];
           printf("\n\nEnter the String to get reversed\n");
           gets(s);// taking string in variable s
              
           l=strlen(s);
           printf("\n\nreverse string is \n");
           for(j=l-1;j>=0;j--)
           {
            printf("%c\n",s[j]);
           }
               
           }
