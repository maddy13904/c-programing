#include<stdio.h>
#include<conio.h>
int main()
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B && A>C)
	{printf("A is greatest");
	}
	else if(B>A && B>C)
	{printf("B is greatest");
	}
	else
	{printf("C is greatest");
	}
	
	//small
	if(A<B && A<C)
	{printf("A is smallest");
	}
	else if(B<A && B<C)
	{printf("B is smallest");
	}
	else
	{printf("C is smallest");
	}
	return 0;
}
