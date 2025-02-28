// print factorials of first n numbers using function

#include<stdio.h>
int factorial (int a){
    int fact = 1;
    for(int i=1;i<=a;i++){
        fact = fact * i; 
    } printf("%d\n",fact);
    return fact;
}
int main(){
    int n;
    printf("Input the Number Till which You want to get Factorial : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       factorial(i);
    }
}