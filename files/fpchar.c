#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
  unsigned char ch;
  FILE *fp;
  /* ABC.C exists and contains "Kicit 44-a Gokulpeth\0 nagpur */
 fp = fopen("abc.c", "r+");
 if (fp == NULL)
 {
 printf("Unable to open the file\n");
 exit(1);
 }
 while((ch = getc(fp))!=EOF)
 printf("%c", ch);
 fclose(fp);
 printf("\n", ch);
 return 0;
 }
