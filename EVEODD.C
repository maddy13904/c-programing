#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter your number:");
scanf("%d",&a);
if(a%2==0)
{printf("even number");}
else
{printf("odd number");}
getch();
return 0;
}