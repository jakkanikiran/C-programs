#include<stdio.h>
#include<unistd.h>

int main() {
struct book{

char name[20];
int noofpages;
float price;
};

strct book b = {0};
printf("%d %f\n",b.noofpages, b.price);
return 0;
}
