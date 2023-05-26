#include<stdio.h>
#include<conio.h>
int fork();
int main() 
{int a = 10;      
if (fork ( ) == 0)      
a++; 
return 0;}
int fork()
{int a=10;
printf ("%dn", a ); 
return 1;
}

