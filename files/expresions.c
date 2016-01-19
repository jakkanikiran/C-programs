#include<stdio.h>
//#include<conio.h>


  int main()  {
 
	int a,b,c,d;
	printf("Enter any number to a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b) {
	if(a>c) {
	if(a>d) 
	printf("A is big");

	else
	printf("D is big");
      }
}
	else{
	if(b>c) {
		if(b>d) 
		printf("B is big");
			else
			printf(" D is big");
		}
				else  {
					if(c>d) 
					printf("C is big");
						else
						printf("D is big ");
					}
	    }
				//getch();
				}
 
