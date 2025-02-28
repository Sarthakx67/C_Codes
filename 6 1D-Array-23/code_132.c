// // wap to check if array is palindrome or not

// #include<stdio.h>
// void checkPalindrome(int a[]){
//     int i=0;
//     int j=5;
//     while(i<j){
//         if(a[i]==a[j]){
//             printf("this is a palindrome");
//         }
//         if(a[i]!=a[j]){
//             break;
//             printf("this is not a palindrome");
//         i++;
//         j--;
//         }
//     }
//     return;
// }
// int main(){
//     int a[6] = {3,4,5,5,4,3};
//     checkPalindrome(a);
// }

// check if array is palindrome or not

#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,2,1};
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i] = arr[5-i-1];
    }
    int check = 1;
    for(int i=0;i<5;i++){
        if(arr[i]!=brr[i]){
            check = 0;
            break;
        }
    }
    if(check==1){
        printf("this is a palindrome");
    }else{
        printf("this is not a palindrome");
    }
}