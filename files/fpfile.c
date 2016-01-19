#include<stdio.h>
#include<stdlib.h>

int main() 
 {
  FILE *fp1,*fp2;
  fp1 = fopen("file1.c", "w");
  fp2 = fopen("file2.c", "w");
  fputc('A', fp1);
  // printf("\n");
  fputc('B', fp2);
//   printf("\n");
  fclose(fp1);
  fclose(fp2);
  return 0;
  }
