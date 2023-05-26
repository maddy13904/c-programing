#include<stdio.h>
int main()
{int n,i,sum;
printf("enter till which number: ");
scanf("%d",&n);
for(i=1;i<=n;i+2)
{sum=sum+i;
}
printf("the sum of odd numbers between 1 to %d= %d",n,sum);
}
