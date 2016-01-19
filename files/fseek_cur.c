#include<stdio.h>

	int main() {

   	FILE *fs,*fp;
	char c, ch[10];
	fs = fopen("source.txt", "r");
//	c=getc(fs);
	fseek(fs, 0, SEEK_END);
	fseek(fs, -4L, SEEK_CUR);
	fgets(ch, 5, fs);
	puts(ch);
	return 0;
}
