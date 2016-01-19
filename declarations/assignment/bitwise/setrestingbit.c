/* set and reset bits*/


#include <stdio.h>
int main()
{
    int y=0;
    printf("y=%x \n", y);
    y = y | 1;        // set bit 0
    printf("y=%x \n", y);
    y = y | 8;       // set bit 3
    printf("y=%x \n", y);
 
    int x=0xff;
    printf("x=%x \n", x);
    x = x & ~1;        // clear bit 0
    printf("x=%x \n", x);
    x = x & ~8;       // clear bit 3
    printf("x=%x \n", x);
 return 0;
} 
 
