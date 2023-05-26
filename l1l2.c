#include<stdio.h>
int main()
{int c[20],i,n,l1,l2;
printf("how many elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&c[i]);
}
for(i=0;i<n;i++){
c[0]=l1;
if(l1<c[i])
{l1=c[i];
}
}
for(i=0;i<n;i++){
c[0]=l2;
if(l2<c[i]&&l2<l1)
{l2=c[i];
}
}
printf("the largest and second largest in the array are: %d and %d",l1,l2 );
return 0;
}
