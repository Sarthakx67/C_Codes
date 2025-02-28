// stair path question good for understanding concept and use of recursion
// SINGLE DOUBLE AND TRIPLE STEPS ARE ALLOWED

#include<stdio.h>
int stair(int n){
    if(n<=2)return n;
    if(n==3)return 4; // isko samjhna ha !!!
    int totalways = stair(n-1) + stair(n-2) + stair(n-3) ;
}
int main(){
    int n = 4;
    int a = stair(n);
    printf("%d\n",a);
}