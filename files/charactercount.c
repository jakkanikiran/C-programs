#include<stdio.h>
#include<stdlib.h>

int main() {
  
   FILE *fp;
   char ch;
   int nol,not,nob,noc=0;
   fp = fopen("kiran.c", "r");
   while(1) 
   {
	ch = fgetc(fp);
	if(ch == EOF)
		break;
	noc++;
	if(ch ==  ' ')
		nob++;
	if(ch == '\n')
		nol++;
	if(ch == '\t')
		not++;
 	}

	fclose(fp);
	printf("Number of characters = %d\n", noc);
	printf("Number of blanks = %d\n", nob);
	printf("Number of tabs = %d\n", not);
	printf("Number of lines = %d\n", nol);
//	printf("%d\n", kiran.c);
	return 0;

}
