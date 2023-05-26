#include<stdio.h>
int prime()
{int n,m,i,j;
printf("enter the intervals= ");
scanf("%d %d",&n,&m);
printf("the prime numbers between %d and %d are: ",n,m);
for(i=n;i<=m;i++)
{for(j=2;j<=i;j++)
{if(i%j==0)
break;
}
if(i==j)
printf("%d ",i);
}
}
int main()
{prime();
return 0;
}
