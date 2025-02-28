// 
#include<stdio.h>
int fibo(int a){
   if(a<=1)return a;
   int f = fibo(a-1) + fibo(a-2);
   return f;
}
int main(){
    int a = 5;
    int b = fibo(a);
    printf("%d",b);
}