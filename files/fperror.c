#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<file.h>
//   #define EOF;

	int main() {
  	unsigned char ch;
  	FILE *fp;
  	fp = fopen("trial.txt","r");

 	 while((ch = getc(fp))!=EOF)
	   printf("%c", ch);
  	   printf("\n");
  	   fclose(fp);
  	   return 0;
 }
