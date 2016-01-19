#include <stdio.h>
#include<stdlib.h>
//#include<file.h>
#include<unistd.h>

int main()
{
 FILE *fp;
// int file;
 file = fopen("file8.txt","w");
 /*Create a file and add text*/
 fprintf(fp,"%s","This is just an example :)"); /*writes data to the file*/
 fclose(fp); /*done!*/
 return 0;
}
