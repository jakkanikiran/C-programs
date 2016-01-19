#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main() {
	int n;
	FILE *fptr;
	fptr=fopen("kiran.txt", "w");
	if(fptr==NULL)
	{
	  printf("Error!");
	  exit(1);
	}

	printf("Enter n: ");
	scanf("%d", &n);
	fprintf(fptr, "%d\n",n);
	fclose(fptr);

	return 0;

  }
