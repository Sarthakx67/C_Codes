// wap to find no of ways to reach nth stairs
// using single double and triple steps

#include<stdio.h>
int noOfWays(int n){
    if (n==1||n==2)return n;
    if (n==3) return 4;
    int totalWays = noOfWays(n-1) + noOfWays(n-2) + noOfWays(n-3);
    return totalWays;
} 
int main(){
    int n = 4;
    int totalWays = noOfWays(n);
    printf("%d",totalWays);
}