#include <paths.h>
#include <string.h>
#include <stdio.h>
#include<malloc.h>
int main(){
unsigned char*a = NULL;
int i=0;
a=(unsigned char*)malloc(sizeof(char)*10);
for(i=0;i<10;i++)
{
printf("[%d]", a[i]);

    }
	
	printf("\n");
	memset(a,4,10);
	for(i=0; i<10; i++)
	{
	  printf("[%d]", a[i]);
	}
	printf("\n");
  return 0;
}
