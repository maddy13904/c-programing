#include<stdio.h>
int main()
{struct employee
{int id;
char name[50];
float salary;
}emp[2];
int i;
for(i=0;i<2;i++)
{scanf("%d",&emp[i].id);
scanf("%s",emp[i].name);
scanf("%f",&emp[i].salary);
}
for(i=0;i<2;i++)
{printf("emp.id is %d\n",emp[i].id);
printf("emp.name is %s\n",emp[i].name);
printf("emp.salary is %f\n",emp[i].salary);
}
}
