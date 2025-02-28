// // // // print factorials of first n numbers using RECURSION

// // // #include<stdio.h>
// // // int factorial (int n){
// // //     if(n==1)return 1;
// // //     int fact = n*factorial(n-1);
// // //     return fact;
// // // }
// // // int main(){
// // //     int n;
// // //     printf("Input the Number Till which You want to get Factorial : ");
// // //     scanf("%d",&n);
// // //     int fact = factorial(n);
// // //     printf("%d",fact);
// // // }

// // #include<stdio.h>
// // int factorial(int a){
// //     if(a==0 || a==1)return 1;
// //     int fact = a * factorial(a-1);
// //     return fact;
// // }
// // int main(){
// //     int a = 6;
// //     int RecAns= factorial(a);
// //     printf("%d",RecAns);
// // }

// #include<stdio.h>
// int factorial(int n){
//     if(n==0)return 1;
//     int fact = n*factorial(n-1);
//     return fact;
// }
// int main(){
//     int a = 5;
//     int b = factorial(a);
//     printf("%d",b);
// }
#include<stdio.h>
int factorial(int a){
    if(a<=1)return a;
    int fact = a * factorial(a-1);
    return fact;
}
int main(){
    int a;
    scanf("%d",&a);
    int b = factorial(a);
    printf("%d",b);
}