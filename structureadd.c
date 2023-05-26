#include<stdio.h>
int main()
{struct students
{int m1,m2,m3,m4,m5;
}stu[4];
int i,sum=0 ;
float avg;
for(i=0;i<4;i++)
{printf("enter the mark of student: \n");
scanf("%d %d %d %d %d",&stu[i].m1,&stu[i].m2,&stu[i].m3,&stu[i].m4,&stu[i].m5);
}
for(i=0;i<4;i++)
{sum+=stu[i].m1+stu[i].m2+stu[i].m3+stu[i].m4+stu[i].m5;
avg=sum/4;
}
printf("the sum and avg of marks is %d and %f",sum,avg);
}
