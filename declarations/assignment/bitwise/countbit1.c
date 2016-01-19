#include<stdio.h>
 int main(){



int counts(int n)
{
   int c = 0;
   while (n)
   {
      c += (counts & 0xFF);
      n >> 8;
   }
   return c;
}

}

