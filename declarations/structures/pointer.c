#include<stdio.h>
  extern int fun();

   int main() 
    {

	int (*p)() = fun;
	(*p)();

	return 0;
	}
	int fun() {
	printf("Loud and clear\n");
	return 0;
}
