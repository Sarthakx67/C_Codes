// wap to get the power of a number by using two inputs

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b ;
    scanf("%d",&b);
    int sum = 1;
    for(int i=1;i<=b;i++){
        sum = sum * a;
    }printf("%d",sum);
}