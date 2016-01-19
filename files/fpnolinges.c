#include<stdio.h>
#include<stdlib.h>

int main() {
  
 FILE *fp;
 char ch;
 int i = 1;
 fp = fopen("myfile1.txt", "w+");
 while((ch = getc (fp)!=EOF))
 {
     if(ch =='\n')
	i++;

    }


  fclose(fp);
  return 0;

  }
