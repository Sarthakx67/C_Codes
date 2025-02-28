// // swapping of integers in array

// #include<stdio.h>
// void fun(int x[]){
//     int temp = x[0];
//     x[0] = x[1];
//     x[1] = temp;
//     return;
// }
// int main(){
//     int arr[2] = {2,9};
//     printf("%d %d\n",arr[0],arr[1]);
//     fun(arr);
//     printf("%d %d",arr[0],arr[1]);
// }   
#include<stdio.h>
int swap(int arr[]){
    int temp;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1]= temp;
}
int main(){
    int arr[4] = {12,11,10,8};
    swap(arr);   
    for(int i=0;i<4;i++){
        printf("%d \n",arr[i]);
    } 
}