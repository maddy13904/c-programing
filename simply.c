#include<stdio.h>
int prime(int n,int m)
{int n,m,i,j;
for(i=n;i<=m;i++)
{for(j=2;j<=i;j++)
if(i%j==0)
break;
}
{if(i==j)
printf("%d",i);
}
}
int main()
{int n,m;
printf("Enter the intervals; ");
scanf("%d %d",&n,&m);
prime(int n,int m);
return 0;
}
