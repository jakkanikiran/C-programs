#include<stdio.h>

   void encrypt();
   int main()
   {
  encrypt();
 }
void encrypt()
{

FILE *fs, *ft;
char ch;
fs = fopen("SOURCE.txt", "r");  /* normal file */
ft = fopen("TARGET.txt", "w");  /* encrypted file */

if(fs == NULL || ft == NULL)
{
  printf("File opening error!");
  exit(1);
  }

 while(( ch = getc (fs))!= EOF)
    putc(~ch, ft);
   fclose(fs);
   fclose(ft);
   return 0;
}
  
