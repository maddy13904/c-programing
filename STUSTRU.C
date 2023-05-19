 #include<stdio.h>
 #include<conio.h>
 struct students
 {char name[50];
 int id,age;
 }stu[100];
 int main()
 {int i,n;
 clrscr();
 printf("enter the no.of students:");
 scanf("%d",&n);
 printf("enter the stu name,id and age:");
 for(i=1;i<=n;i++)
 {scanf("%s%d%d",&stu[i].name,&stu[i].id,&stu[i].age);
 }
 printf("the employee details are:\nSTU_NAME\nSTU_ID\nSTU_AGE");
 for(i=1;i<=n;i++)
 {printf("\n%s\n%d\n%d",stu[i].name,stu[i].id,stu[i].age);
 }
 getch();
 return 0;
 }