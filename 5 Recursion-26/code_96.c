// // // wap to find the power of a raised to b using recursion

// // #include<stdio.h>
// // int power(int a,int b){
// //     if(b==0) return 1;
// //     int recAns = a*power(a,b-1);
// //     return recAns;
// // }
// // int main(){
// //     int a = 2;
// //     int b = 4;
// //     int p = power(a,b);
// //     printf("Power of %d raised to %d is : %d",a,b,p);
// // }

// #include<stdio.h>
// int power (int a,int b){
//     if(b==0) return 1;
//     int pow = a * power(a,b-1);
//     // return pow;
// }
// int main(){
//     int a = 3;
//     int b = 3;
//     int recAns = power(a,b);
//    printf("%d",recAns);
// }

#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    
    int pow = a * power(a,b-1);
    return pow ;
}
int main(){
    int a = 2;
    int b = 4;
    int c = power(a,b);
    printf("%d",c);
}