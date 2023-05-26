#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int sum [2][2],a[2][2],b[2][2],i,j;
{printf("enter a matrix elements\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d\2",&a[i][j]);
}
}
}
{printf("enter b matrix elements\n");
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d\2",&b[i][j]);
}
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{sum[i][j]=a[i][j]+b[i][j];
}
}
{printf("sum of the two matrix is\n");
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%d\n",sum[i][j]);
}
}
}




