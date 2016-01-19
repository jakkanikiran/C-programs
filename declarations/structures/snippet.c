#include<string.h>
#include<stdio.h>
int main() {
 struct book
 {
  char name[20];
  int noofpages;
  float fprice;
 };
  
  struct book b = {0};
  printf("%d %f\n", b.noofpages, b.fprice);
  return 0;
  }
