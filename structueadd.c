#include<stdio.h>
int main()
{struct students
{int m1,m2,m3,m4,m5;
}stu[4];
int i;
for(i=0;i<4;i++)
{printf("enter the mark of student: \n");
scanf("%d %f %d %d %d",&stu[i].m1,&stu[i].m2,&stu[i].m3,&stu[i].m4,&stu[i].m5);
}
int sum;
float avg;
{sum==stu[i].m1+stu[i].m2+stu[i].m3+stu[i].m4+stu[i].m5;
avg==sum/5;
}
{printf("the sum and avg of marks is %d and %d",sum,avg);
}
}
