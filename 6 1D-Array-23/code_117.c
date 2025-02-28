// // calculate the sum of all numbers in the given array

// #include<stdio.h>
// int main(){
//     int sum = 0;
//     int arr[5] ={0,1,2,3,4};
//     for(int i=1;i<=5;i++){
//         int a = arr[i];
//         sum = sum + a;
//     }
//     printf("%d",sum);
// }

// calculate the sum of all numbers in a given array

#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
        // printf("%d\n",sum);    
    }
    printf("%d",sum);
}