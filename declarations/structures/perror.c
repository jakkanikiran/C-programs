#include<stdio.h>

int main() {
 char *cptr,c;
 int *vptr,v;
 c=10; v=0;
 cptr = &c;
 vptr = &v;
 printf("%d\n", cptr,c);
 printf("%d\n", vptr,v);
 printf("%d\n", c);
 printf("%d\n",v);
 return 0;

}
