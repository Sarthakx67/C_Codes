// // program to find number of digit are in a number

// #include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int counter = 0;
//     while(n!=0){
//         n = n/10;
//         counter ++;
//     }printf("%d",counter);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("%d",count);
}