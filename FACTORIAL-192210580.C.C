#include<stdio.h>
#include<conio.h>
int main()
{int n,fact=1,i;
printf("enter your number:");
scanf("%d",&n);
{for(i=1;i<=n;i++)
if(n==0||n==1)
printf("the factorial of your number: %d",n);
else
fact=fact*i;
}
printf("the factorial of your number: %d",fact);
return fact;
}
