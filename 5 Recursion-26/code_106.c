// code to find no of total ways to reach nth stairs
// did it myself

#include<stdio.h>
int noOfWays(int n){
    if(n==1||n==2) return n;
    int way1 = noOfWays(n-1);
    int way2 = noOfWays(n-2);
    int totalways = way1+way2;
    return totalways;
}
int main(){
    int n = 5;
    int totalWays = noOfWays(n);
    printf("%d",totalWays);
}