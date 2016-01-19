//** program to strncpy

#include<stdio.h>
#include<string.h>

char str1[200],str2[210];
int str_ncpy( );
int n;
int main()
{
  printf("enter source string\n");
  scanf("%s",&str1);
  printf("Enter n value \n"  );
  scanf("%d",&n);
  str_ncpy();
  printf("copied string is:%s\n",str2);
  return 0;
}
int str_ncpy()
{
    int i;
    for(i=0 ; str1[i] != '\0' ; i++)
    {
        if(i <= n-1)
        {
            str2[i] = str1[i];
        }
    }
return str2;
}





