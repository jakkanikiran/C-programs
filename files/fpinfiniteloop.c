#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <string.h>

int main() {

 FILE *fp;
 int ptr, i;
 fp = fopen("myfile.txt", "r");

// while(( i = fgetc(fp))!= NULL)
  printf("%s", fp);
  printf("\n");
  return 0;
 }
