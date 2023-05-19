 #include<stdio.h>
 #include<conio.h>
 struct emps
 {char name[50];
 int empid,salary;
 }emp[100];
 int main()
 {int i,n;
 clrscr();
 printf("enter the no.of employees:");
 scanf("%d",&n);
 printf("enter the emp name,id and salary:");
 for(i=1;i<=n;i++)
 {scanf("%s%d%d",&emp[i].name,&emp[i].empid,&emp[i].salary);
 }
 printf("the employee details are:\nEMP_NAME\nEMP_ID\nEMP_SALARY");
 for(i=1;i<=n;i++)
 {printf("%s\n%d\n%d",emp[i].name,emp[i].empid,emp[i].salary);
 }
 getch();
 return 0;
 }