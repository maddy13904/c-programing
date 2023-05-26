#include "string.h"
typedef struct stu1{
    char name1[6];
    char name2[6];
    double marks;
}STU1;
int main()
{STU1.name1="rohit";
STU1.name2="kumar";
STU1.marks=87.43;
char *p;
p=*&stu1;
printf("%s",p);  
}


