#include <stdio.h>

int i;
char string[200];
int str_len();

int main()
{

   printf("Enter a string: \n");
   scanf("%s",string);
   str_len();
}

int str_len()
  {

   for(i=0; string[i]!='\0'; ++i);
   printf("Length of string: %d\n",i);
  }



