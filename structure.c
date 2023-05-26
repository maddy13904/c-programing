#include<stdio.h>
int main()
{
struct employee
{int id;
char name[50];
float salary;
}emp;
{scanf("%d",&emp.id);
scanf("%s",emp.name);
scanf("%f",&emp.salary);
}
{printf("emp.id is %d\n",emp.id);
printf("emp.name is %s\n",emp.name);
printf("emp.salary is %f\n",emp.salary);
}
}
