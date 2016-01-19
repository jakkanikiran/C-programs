#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>  

  int main(){

	FILE *fs,*ft;
	char c[10];
	fs = fopen("source.txt", "r");
	c[5] = getc(fs);
 	fseek(fs,0,SEEK_END);
	fseek(fs,-4L,SEEK_CUR);
	fgets(c,5,fs);
	puts(c);
	return 0;
   }
