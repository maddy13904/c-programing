#include<stdio.h>
#include<conio.h>
int main ()
{
int year;
clrscr();
printf("enter year:");
scanf("%d",&year);
if(year%4==0)
{printf("leap year");
}
else
{printf("not a leap year");
}
getch();
return 0;
}