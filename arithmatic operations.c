#include<stdio.h>
#include<conio.h>
#include<math.h>
// Declaring addition function
int addition(int a, int b){
    int sum = a + b;
    return sum;
}
// Declaring subtraction function
int subtract(int a, int b){
    int difference = a - b;
    return difference;
}
// Declaring multiplication function
int multiply(int a, int b){
    int multiply = a * b;
    return multiply;
}
// Declaring division function
float division(float a, float b){
    float divide = a / b;
    return divide;
}
int power(int a,int b){
	int power= a^b;
	return a * pow(a, b - 1);
}
int main()
{
    int x, n;
    
    // Asking for input
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Displaying output
    printf("Arithmetic operations on %d and %d: \n", x, n);
    printf("Addition: %d\n", addition(x, n));
    printf("Subtraction: %d\n", subtract(x, n));
    printf("Multiplication: %d\n", multiply(x, n));
    printf("Division: %f\n", division(x, n));
    printf("power: %d\n", power(x, n));
    return 0;
}
