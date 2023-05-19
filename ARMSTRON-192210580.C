#include<stdio.h>
#include<conio.h>
int main()
{int n,r,c,sum=0;
clrscr();
printf("enter number:");
scanf("%d",&n);
c=n;
while(c!=0)
{r=c%10;
sum+=r*r*r;
c=c/10;
}
if(sum==n)
{printf("armstrong");}
else
{printf("not armstrong");}
getch();
return 0;
}