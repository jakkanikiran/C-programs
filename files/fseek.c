#include<stdio.h>
#include<stdlib.h>

int main() 
  {
  FILE *fp;
  fp = fopen("jaya.txt", "w+");
  fseek (fp, 20L, SEEK_SET);
  fclose(fp);
  return 0;
 }
