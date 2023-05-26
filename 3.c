#include<stdio.h>
#include<conio.h>
float avg(float,float,float);
float avg(float x,float y,float z)
{
    return (x+y+z)/3;
}
int main(){
    float p=1,q=2,r=-2,a;
    a=avg(p,q,r);
    printf("%f",a);  
}


