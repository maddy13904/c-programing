#include<stdio.h>
#include<conio.h>
int main()
{int a,i,sum=0;
clrscr();
printf("enter your number:");
scanf("%d",&a);
for(i=1;i<a;i++)
{if(a%i==0)
{sum+=i;
}
else
{continue;}
}
if(sum==a)
{printf("perfect number");}
else
{printf("not perfect number");}
getch();
return 0;
}