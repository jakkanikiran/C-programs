#include<stdio.h>
#include<stdlib.h>


int main(){

  int i,fss;
  char ch,source[20] = "source.txt",target[20] = "target.txt",t;
  FILE *fs,*ft;
  fs = fopen(source,"r+");
  ft = fopen(target, "w+");


  while(1) 
 {
    ch = getc(fs);
    if(ch == EOF)
	break;

	
	else
	{
	  fseek(fs,2L,SEEK_CUR);
	  fputc(ch,ft);
	}
       }
	return 0;
   }

