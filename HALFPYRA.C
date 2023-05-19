#include<stdio.h>
#include<conio.h>
int main()
{int a,i,j;
printf("enter the number of rows:");
scanf("%d",&a);
for(i=0;i<=a;i++)
{for(j=i;j<=a;j++)
{printf("x");
}
printf("\n");
}
getch();
clrscr();
return 0;
}