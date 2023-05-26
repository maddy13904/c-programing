#include<stdio.h>
int main()
{int a,rec(int a);
printf("enter your number: ");
scanf("%d",&a);
printf("the factorial of the given number %d=%d",a,rec(a));
return 0;
}
int rec(int a)
{int f;
if(a==1)
{return 1;
}
else
{f=a*rec(a-1);
return f;
}
}
