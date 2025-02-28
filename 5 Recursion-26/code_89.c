// // // wap to print n to 1

// // #include<stdio.h>
// // void decreasing(int n){
// //     if(n==0){return;}
// //     printf("%d\n",n);
// //     decreasing(n-1);
// //     return;
// // }
// // int main(){
// //     int n;
// //     printf("input the number : ");
// //     scanf("%d",&n);
// //     decreasing(n);
// // }

// #include<stdio.h>
// void recursion(int a){
//     if(a==0) return;
//     printf("%d ",a);
//     recursion(a-1);
// }
// int main(){
//     int a = 10;
//     recursion(a);
// }

#include<stdio.h>
int number(int n){
    if(n==0)return 0;
    printf("%d ",n);
    number(n-1);
}
int main(){
    int a = 123;
    int b = number(a);
}