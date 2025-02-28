// take 3 input of side of triangle and determine if the triangle is valid or noyt

// if sum of two sides are greater than the 3rd then triangle is valid

#include<stdio.h>
int main(){
    int a;
    printf("1st Number : ");
    scanf("%d",&a);
    int b;
    printf("2st Number : ");
    scanf("%d",&b);
    int c;
    printf("3st Number : ");
    scanf("%d",&c);
    if(a+b>c||a+c>b||b+c>a){printf("yes");}
    else{printf("no");}
}