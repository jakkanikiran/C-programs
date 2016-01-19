#include<stdlib.h>
#include<unistd.h>
#include <stdio.h>
int main()
{
   int n;
   FILE *fptr;
   if(fptr=fopen("program1.txt","r"))
	{
       printf("Error! opening file\n");
       exit(1);         /* Program exits if file pointer returns NULL. */
   }
   
  fscanf(fptr,"%d",&n);
   printf("Value of n=%d",n); 
   fclose(fptr);   
   return 0;
}
