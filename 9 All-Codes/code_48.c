// print the factorials of the first n numbers

#include<stdio.h>
int main(){
    int n;
    printf("input the number here : ");
    scanf("%d",n);
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
       // printf("the factorial is : %d\n",factorial);
    }printf("the factorial is : %d\n",factorial);
}