// take input of 2 integers 
//find remainder when a is divided by b

#include<stdio.h>
int main(){
    // int a;
    // scanf("%d",&a);
    // int b;
    // scanf("%d",&b);
    int a,b;
    printf("Input DIvidend : ");
    scanf("%d",&a);
    printf("Input Divisor : ");
    scanf("%d",&b);
    int quotient =a/b;
    int remainder = a-(b*quotient);
    printf("The Remainder when %d id divided by %d is : %d",a,b,remainder);
}