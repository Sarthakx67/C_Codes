// // find the maximum value out of all the elements in the array

// #include<stdio.h>
// int main(){
//     int a[8]={9,2,11,13,3,4,8,7};
//     int max = -1;
//     for(int i=0;i<=7;i++){
//         if(max<a[i]){
//             max = a[i];
//         }
//     }
//     printf("the maximum number in array is : %d",max);
// }

#include<stdio.h>
int main(){
    int arr[5] = {1,200,300,4011,53};
    int greatest = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>greatest){
            greatest = arr[i];
        }
    }
    printf("%d",greatest);
}