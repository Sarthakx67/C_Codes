// armstrong no is a positive integer that is equal to the sum of the number of its digits
// each raised to the power of the number of digits in the number

// check if a no is armstrong or not

#include<stdio.h>
int power(int n,int a){
    int count = 0;
    while(n!=0){
        count++;
        n = n/10;
    }
    int pow = 1;
    for(int i=1;i<=count;i++){
        pow = pow*a;
    }
    return pow;
}
int SumOfDigitsWithPower(int n){
    int sum = 0;
    int z = n;
    while(n!=0){
        int a = n%10;
        int x = power(z,a);
        sum = sum+x;
        n = n/10; 
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    // find the sum of no of digits
    int a = SumOfDigitsWithPower(n);
    printf("%d\n",a);
    // int b = power(2);
    // printf("%d",b);
    if(a==n){
        printf("this is a armstrong number");
    }else{
        printf("this is not a armstrong number");
    }
}