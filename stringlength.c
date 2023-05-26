#include<stdio.h>
#include<string.h>
int main()
{char c[50];
printf("Enter your word:\n");
fgets(c,sizeof(c),stdin);
printf("Your word is: ");
puts( c);
strlen(c);
printf("the length of the string is: %d",strlen(c));
}
