#include<stdio.h>
void swap(int*,int*);
int main()
{int n,m;
printf("enter value of n and m=");
scanf("%d %d",&n,&m);
printf("the value of n and m before swapping= %d %d\n",n,m);
swap(&n,&m);
printf("the value of n after swapping= %d\n",n);
printf("the value of m after swapping= %d",m);
return 0;
}
void swap(int *n,int *m)
{int temp;
temp=*n;
*n=*m;
*m=temp;
return;
}
