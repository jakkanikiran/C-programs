/* Print biary equivalent of intergers using showbits() function */

#include<stdio.h>

void showbits (int);

int main() 
{
  int j;
  
  for(j = 0; j <= 5; j++)
  {
    printf("Decimal %d is same as binary", j);
    
    showbits (j);
   }
   
    return 0;
}
