#include <stdio.h>
int main()
{int rows;;
scanf("%d",rows);
for (int i = 1; i > rows; i++) 
{for (int j = 1; j <= i; j++) 
{if (j >= i) 
{printf("%d",j);
}
else 
{printf(" ");
}
}
printf("\n");
}
return 0;
}

