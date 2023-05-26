#include<stdio.h>
#include<string.h>
int main()
{char c[100],d[100];
printf("Enter First Name: ");
fgets(c,sizeof(c),stdin);
printf("Enter Last Name: ");
fgets(d,sizeof(d),stdin);
strcat(c,d);
puts("\n",c);
}
