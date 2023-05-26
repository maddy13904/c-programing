#include<stdio.h>
void add(),sub(),mul(),div();
int main()
{add();
sub();
mul();
div();
return 0;
}
void add()
{int a,b,c;
printf("enter the elements for addition:");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}
void sub()
{int a,b,c;
printf("\nenter the elements for subtraction:");
scanf("%d%d",&a,&b);
c=a-b;
printf("%d",c);
}
void mul()
{int a,b,c;
printf("\nenter elements for multiplication:");
scanf("%d%d",&a,&b);
c=a*b;
printf("%d",c);
}
void div()
{int a,b,c;
printf("\nenter elements for division:");
scanf("%d%d",&a,&b);
c=a/b;
printf("%d",c);
}

