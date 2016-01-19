#include<stdio.h>
#include<string.h>
#include<unistd.h>

void f (struct emp);

/* any other prototype nay go here */
struct emp
{
void f(struct emp);
char name[20];
int age;
};

int main() 
{
struct emp e = {"Soicher", 34};
f(e);
return 0;
}

void f(struct emp ee)
{
printf("%s %d\n", ee.name, ee.age);

}

 
