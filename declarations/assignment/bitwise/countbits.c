#include<stdio.h>

int main() {



int bitcount(int n) {
    int tot = 0;
 
    int i;
    for (i = 1; i <= n; i = i<<1)
        if (n & i)
            ++tot;
 
    return tot;
}
}
