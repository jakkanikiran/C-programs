
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct event
{
char name[20];
int kg;
};
int main()
{
 int i;
 struct event e[2];

 //first candidate details
 strcpy(e[0].name,"Jakkani");
 e[0].kg=70;

// second candidate details
 strcpy(e[1].name,"Kiran");
 e[1].kg=60;

 for(i=0;i<2;i++)
 {
 printf("candidate %d: %s   with laguage is: %d kg's\n",i,e[i].name,e[i].kg);
 }
}
