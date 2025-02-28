// stair path question good for understanding concept and use of recursion
// only single and double path is allowed

#include<stdio.h>
int stair(int n){
    if(n<=2)return n;
    int ways = stair(n-1)+stair(n-2);
    return ways;
}
int main(){
    int n = 7;
    int a = stair(n);
    printf("%d",a);
}