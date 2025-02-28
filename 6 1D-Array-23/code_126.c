// // find the second largest number in the array

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int x = 0;
//     int sx = INT_MIN;
//     int a[8] = {1,10,3,15,5,6,7,9};
//     for(int i=1;i<=8;i++){
//         if(a[i]>x){
//             x=a[i];
//         }
//         if(sx<a[i] && x!=a[i]){
//             sx = a[i];
//         }
//     }printf("%d",sx);
// }

// find the second largest number in the array

#include<stdio.h>
int main(){
    int arr[5] = {1,40,90,8,5};
    int largest = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int secondlargest = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
    }
    printf("%d",secondlargest);
}