#include <stdio.h> 
  int main() 
  { 
   int r,rem=0,c,a,re=0,em=0,p[3],s[3],n,b,i=0,*pr,*pr1,*p1,*p2; 
   pr1=p; 
   pr=s; 
   p1=&n; 
   p2=&b; 
   for(i=0;i<3;i++) 
   { 
    printf("enter the a,b"); 
    scanf("%d %d",&p[i],&s[i]); 
   } 
    for(i=0;i<3;i++) 
   { 
    *p1=*pr1; 
    *p2=*pr; 
    while(n!=0) 
    { 
     r=n%10; 
     rem=rem*10+r; 
     n=n/10; 
    } 
    while(b!=0) 
    { 
    r =b%10; 
    re=re*10+r; 
    b=b/10; 
   } 
   c=rem+re; 
   while(c!=0) 
   { 
   r=c%10; 
   em=em*10+r; 
   c=c/10; 
  } 

   printf("the reverse no is:%d",em); 


  }
   return 0; 
 }


