#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

 FILE *fp;
 char str[11],ch;
 int i = 0;
 fp = fopen("input.txt", "r");
 while((ch = getc(fp))!=EOF)
 {
   if(ch == '\n' || ch=='J')
      {

	str[i] = '\0';
 	strrev (str);
  	printf("%s", str);
 	i = 0;
	}
	
	else
	   str[i++] = ch;
 	  }

   	fclose(fp);
	printf("\n");
	return 0;

	}
