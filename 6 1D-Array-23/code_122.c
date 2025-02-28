// // wap to count the number of elements greater than a given number n in a array

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     int a[8]={1,2,3,4,5,6,7,8};
//     for(int i=0;i<=7;i++){
//         if(n<a[i]){
//             count +=1;
//         }
//     }
//     printf("%d",count);
// }
// 
#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int arr[6] ={1,2,3,4,5,6};
    int count = 0;
    for(int i=1;i<=6;i++){
        if(arr[i]>n){
            count++;
        }
    }
    printf("%d",count);
}