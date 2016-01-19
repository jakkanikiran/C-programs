#include<stdio.h>
#include<stdlib.h>


int main() {
 FILE *fp;
 int t;
 fp = fopen("DUMMY.C", "w");
 t = fileno(fp);
 printf("%d\n", t);
 return 0;
 }
