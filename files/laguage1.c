
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct event
{
char *name;
int kg;
} events [] = {
        {"venu", 10},
        {"kiran", 20},
        {"chinna", 30},
        {"mahesh", 40}
};
int main()
{
 int i;
 for(i=0;i<4;i++)
 {
 printf("candidate %d: %s   with laguage is: %d kg's\n",
i,events[i].name,events[i].kg);
 }
}

