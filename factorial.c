#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int x,fact=1,n;
printf("ENTER YOUR NUMBER\n");
scanf("%d",&n);
for(x=1;x<=n;x++)
{fact=fact*x;
}
printf("the factorial of %d is: %d",n,fact);
return 0;
}
