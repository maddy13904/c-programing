#include<stdio.h>
#include<conio.h>
int main()
{
int a[100]={1,2,3,4,5,6,7,8,9,10,11},i,sum=0;
float avg;
clrscr();
for(i=0;i<12;i++)
{sum+=a[i];
}
avg=sum/11;
printf("mean=%.1f median=%d",avg,a[11/2]);
getch();
return 0;
}
