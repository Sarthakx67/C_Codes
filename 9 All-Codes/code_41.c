// code to find out the sum of all numbers on integer

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int lastdigit;
    while(n!=0){
        lastdigit= n % 10;
        sum = sum + lastdigit;
        n = n/10;
    }printf("%d",sum);
}