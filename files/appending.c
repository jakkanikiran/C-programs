#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt","a");
    fprintf(fp,"%s","This is just an example :"); /*append some text*/
    printf("\n");
    fclose(fp);  
    return 0;
}
