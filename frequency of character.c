#include<stdio.h>
#include<conio.h>
int main()
{char c[100],search;
int i,count=0;
printf("Enter the Word: ");
fgets(c,sizeof(c),stdin);
printf("Enter search Character: ");
scanf("%s",&search);
for(i=0;c[i]!='\0';i++)
{if(search==c[i])
{count++;
}
}
printf("%d",count);
return 0;
}
