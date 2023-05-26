#include<stdio.h>
int main()
{int a,b,i,j,flag;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("prime numbers between %d and %d: ",a,b);
for(i=a;i<=b;i++)
{if (i==1||i==0)
continue;
flag=1;
for(j=2;j<=i/2;j++)
{if(i%j==0)
{
flag=0;
break;
}
}
if(flag==1)
printf("%d ",i);
}
return 0;
}
