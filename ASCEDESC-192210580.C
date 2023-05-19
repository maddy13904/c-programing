#include <stdio.h>
#include<conio.h>
int main ()
{int a[100]={1,5,8,4,6,3,9,10,2,7},i,temp;
clrscr();
for(i=0;i<11;i++)
{if(a[i]>a[i+1])
{temp=a[i+1];
a[i+1]=a[i];
a[i]=temp;
}
else
{continue;
}
}
for(i=0;i<=11;i++)
{printf("%d ",a[i]);}
getch();
return 0;
}