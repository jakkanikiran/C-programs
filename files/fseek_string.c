#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


int main() {
  
 	FILE *fptr;
	char str[80];
	fptr = fopen("f1.dat", "w+");
	if(fptr == NULL) 
	  printf("Cannot open file\n");
	else
	{
	  while(strlen (gets (str)) > 0)
	{
	   fputs(str, fptr);
	   fputs("\n",fptr);
	}
	fclose(fptr);
	}
	return 0;
	}
