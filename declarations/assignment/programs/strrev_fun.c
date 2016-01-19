/*string reverse */


#include<stdio.h>
#include<string.h>

char str[100], temp;
int i, j = 0;

int main()
{
  printf("\n Enter the string :");
  scanf("%s",str);
  str_rev(str);
  printf("\n Reverse string is :%s\n", str);
}

int str_rev(int n)
{

  i = 0;
  j = strlen(str) - 1;

  while (i < j)
    {
     temp = str[i];
     str[i] = str[j];
     str[j] = temp;
     i++;
     j--;
    }

  return str;
}

