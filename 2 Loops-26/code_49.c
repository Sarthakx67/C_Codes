// print the nth fibonacci numbers

// #include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int a = 0;
//     int b = 1;
//     int sum = 0;
//     if(n==1 || n==2){
//             printf("The %dth fibonacci number is : %d",n,b);
//         }
//     else{
//         for(int i=1;i<=n-2;i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//         }
//         printf("The %dth fibonacci number is : %d",n,sum);
//     }      
// }

#include<stdio.h>
int main(){
    int n = 6;
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("0 ");
        }else{
        c = a+b;
        a = b;
        b = c;
        printf("%d ",c);
        }
    } 
}