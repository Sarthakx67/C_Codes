// // print hello world
// #include <stdio.h>
// int main(){
//     printf("Hello World !!!\nhello world");
//     return 0;
// }

#include<stdio.h>
int main(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}