#include<stdio.h>
#include<conio.h>
int main()
{
int i,a,fact=1;
printf("Enter n value:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("The factorial of the given number is %d",fact);
return 0;
}
