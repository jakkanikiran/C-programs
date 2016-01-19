#include<stdio.h>
#include<unistd.h>
#include<string.h>

	struct emp
	{
	char name[20];
	int age;
	};
		/* some more code may go here */
	inf fun(int aa)
	{
	int bb;
	bb=aa*aa;
	return(bb);
	}

	int main()
	{
	int a;
	a= fun(20);
	printf("%d\n", a);
	return 0;
	}
