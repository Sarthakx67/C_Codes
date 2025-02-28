 // take input of a number and get no divisible by 5 or 3 but not with 15

#include<stdio.h>
int main(){
    int a;
    printf("1st Number : ");
    scanf("%d",&a);
    if( (a%5==0 || a%3==0) && a%15!=0){
        printf("this number is divisible by 3 or 5 but not divisible by 15");
    }
}