// wap to print nth no of fibonacci series

#include<stdio.h>
int fibo(int n){
    if(n<=2)return 1;
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    int ans = ans1 + ans2;
    return ans;
}
int main(){
    int n = 7;
    int a = fibo(n);
    printf("%d",a);
}