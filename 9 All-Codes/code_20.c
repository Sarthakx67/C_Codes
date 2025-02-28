// take 3 positive integer input then print the greatest of them
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
    if(a>b && a>c){printf("greatest of them is 1st Number : %d",a);}
    else if(b>a && b>c){printf("greatest of them is 2nd Number : %d",b);}
    else if(c>a && c>b){printf("greatest of them is 3rd Number : %d",c);}
    else{printf("invalid ");}
}