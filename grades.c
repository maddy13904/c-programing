#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int marks;
scanf("%d",&marks);
if(marks<50)
{printf("grade=F");
}
else if(marks>=50 && marks<60)
{printf("grade=C");
}
else if(marks>=60 && marks<70)
{printf("grade=B");
}
else if(marks>=70 && marks<80)
{printf("grade=B+");
}
else if(marks>=80 && marks<90)
{printf("grade=A");
}
else if(marks>=90 && marks<=100)
{printf("grade=A+");
}
}
