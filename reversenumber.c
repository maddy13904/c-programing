#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int Num, rev_Num = 0, remainder,a;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);    

for(a=Num;Num!=0;Num=Num/10)
	{

        remainder = Num % 10;

        rev_Num = rev_Num * 10 + remainder;


    }    

    printf("The reversed number is: %d", rev_Num);

    return 0;
}
