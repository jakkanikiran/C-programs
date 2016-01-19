#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main() {

	FILE *fp;
	char ch;

	fp = fopen("kiran.txt", "r+");
	while(1) {
	    	ch = fgetc(fp);
		if(ch == EOF)
		
		break;

		printf("%c", ch);
		
		printf("\n");
		fclose(fp);
		}
		return 0;
	}
