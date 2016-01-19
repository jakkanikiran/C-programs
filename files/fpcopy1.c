#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  
   FILE *fs,*ft;
   char ch;
	
   fs = fopen("kiran.c", "r");
   ft = fopen("kumar1.txt", "w");
   ch = getc(fs);
   fputc(ch, ft);
   

   fclose(fs);
   fclose(ft);
   return 0;
  }
   
   	
