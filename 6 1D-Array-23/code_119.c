// // find the minimum value out of all the elements in an array

// #include<stdio.h>
// int main(){
//     int a[8]={9,2,11,13,3,4,8,7};
//     int min = a[0];
//     for(int i=0;i<=7;i++){
//         if(min>a[i]){
//             min=a[i];
//         }
//     }
//     printf("%d",min);
// }
#include<stdio.h>
int main(){
    int arr[5] = {2304,2000,3400,4011,5103};
    int minimum = arr[1];
    for(int i=0;i<5;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    printf("%d",minimum);
}