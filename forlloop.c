#include<stdio.h>
#include<conio.h>
int main()
{int i,j,n;
printf("Enter the number rows:\n");
scanf("%d",&n);
printf("pattern:\n");
for(i=1;i<n;i++)
{for(j=1;j<=i;j++)
{

printf("  %d",j);
}

printf("\n");
}
}
