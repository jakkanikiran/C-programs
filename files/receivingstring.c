#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
  FILE *fp;
  char s[80];
  fp = fopen("poem.txt", "w");
  if(fp == NULL);
  {
   puts("Cannot open file");
   exit(1);
   }
  
   printf("\n Enter a few lines of text:\n");
   while(strlen(gets(s)) > 0)
   {
    fputs(s,fp);
    fputs("\n", fp);
   }

   fclose(fp);
   return 0;

  }
