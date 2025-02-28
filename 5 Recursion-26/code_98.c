// // stair path question good for understanding concept and use of recursion
// // only single and double path is allowed

// #include<stdio.h>
// int stair(int n){
//     if(n<=2)return n;
//     int ways = stair(n-1)+stair(n-2);
//     return ways;
// }
// int main(){
//     int n = 7;
//     int a = stair(n);
//     printf("%d",a);
// }

// wap to print the no of possible ways to climb on a stair using 1 steps 2 steps 
#include<stdio.h>
int stairs(int a){
if(a<=2)return a;
int rec = stairs(a-1) + stairs(a-2);
return rec;
}
int main(){
    int a = 5;
    int b = stairs(a);
    printf("%d",b);
}