#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{char c;
int lowercase,uppercase;
printf("Enter Character: ");
scanf("%c",&c);
uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
if(!isalpha(c))
{printf("error-non alpharical character");
}
else if(lowercase||uppercase)
{printf("char is vowel");
}
else 
{printf("char is consonant");
}
}
