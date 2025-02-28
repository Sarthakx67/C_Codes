// print factorials of first n numbers using RECURSION

#include<stdio.h>
int factorial (int n){
    if(n==1)return 1;
    int fact = n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    printf("Input the Number Till which You want to get Factorial : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
}