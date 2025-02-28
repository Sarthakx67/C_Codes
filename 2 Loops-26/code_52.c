// code to find out the armstrong value from 1 to 500

// An Armstrong number is a fascinating concept in number theory! 
// It's a number that is equal to the 
// sum of its own digits each raised to the power of the number of digits.

// 145 = 1^3 + 4^3 + 5^3

#include<stdio.h>
int power(int a,int count){
    int p = 1;
    for(int i=1;i<=count;i++){
        p=p*a;
    }
    return p;
}
int digits(int n){
    int count = 0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int n ;
    scanf("%d",&n);
    int a = n;
    int count = digits(n);//3
    // printf("%d\n",count);
    int c ;
    int sum = 0;
    while(a!=0){
        int b = a%10;
        // printf("%d\n",b);
        c = power(b,count);
        // printf("%d\n",c);
        sum = sum + c;
        a=a/10;
    }
    if(sum == n){
        printf("this is a armstrong number");
    }
    else{
        printf("this is not a armstrong number");
    }
}

