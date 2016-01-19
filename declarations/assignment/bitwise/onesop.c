#include<stdio.h>

int showbits(int);
 int main() 
{
  int j,k;
 
  for(j = 0; j <= 3; j++)
  {
   printf("Decimal %d is same as binary " , j);
   showbits(j);
   
   k = ~j;
   printf("One's complements of %d is", j);
   showbits (k);
   }
  return 0;
  

}
