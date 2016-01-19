#include<stdio.h>

int main() {
 //extern int i;
   int i=20;
   i=80;
    printf("%d\n", sizeof(i));
    printf("%d\n", i);
     i=0;
    printf("%d\n", i);
 return 0;

}
