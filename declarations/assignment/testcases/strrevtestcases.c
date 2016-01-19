#include <stdio.h>
#include <string.h>

int main() {
    char st1[19];
    char st2[19];
    int cnt,i,k,c,len,m,sign;

    printf("enter the first string:");
    scanf("%s",&st1);
    printf("enter the second string:");
    scanf("%s", &st2);

      len=strlen(st1);

    for(i=0; i<len; i++) {
        c=0;
    if (st1[i] == st2[c]) {
         m = i;
         sign = 0;
         cnt = 0;

       while(st2[c] != '\0' && sign!=1) {
       if (st1[m] == st2[c]) {
        m++;
        c++;
        cnt++;
        } 
	else
        sign=1;
        }

        if (sign == 0) 
	{
        printf("%d\n",i);
        k=1;
       }
      }
    }
    if (k != 1)
    if (sign!=0)
    printf("-1\n");
    return 0;
  }
