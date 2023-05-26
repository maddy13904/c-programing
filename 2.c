#include <stdio.h>
int main() 
{char x, f;
printf("-----Enter a character to check itself-----\n");
scanf("%c", &x);
f = (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') ? 1 : 0;
if (f) {
printf("\n%c is an alphabet character.\n", x);
} 
else 
{printf("\n%c is not an alphabet character.\n", x);
}
return 0;
}
