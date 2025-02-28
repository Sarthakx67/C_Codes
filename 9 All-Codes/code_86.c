// program to find the hcf of numbers

#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return a;
    }else{return b;}
}
int main(){
    int a ;
    printf("Input the first number : ");
    scanf("%d",&a);
    int b ;
    printf("Input the second number : ");
    scanf("%d",&b);
    int x ;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            x = i;
        }
    }printf("The HCF/GCD of %d and %d is : %d\n",a,b,x);
}