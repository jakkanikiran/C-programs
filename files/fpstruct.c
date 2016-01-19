#include<stdio.h>
#include<stdlib.h>
  int main() {
   struct rain_details
     {
	char city[10];
	float raininmm;
	};

	struct rain_details r = {"Bangalore", 405};
	FILE *fp;
	fp = fopen("rain.dat", "wb\n");
	/* add function call here */
	fwrite(&r, sizeof(r), 1, fp);
	fclose(fp);
	return 0;
	}
