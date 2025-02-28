// // program to find the missing number in a array
// #include<stdio.h>
// int main(){
//     int arr[5] ={1,2,4,3,4};
//     for(int i=0;i<=4;i++){
//         for(int j=i+1;j<=4;j++){
//             if(arr[i]==arr[j]){
//                 printf("dublicate element is : %d",arr[i]);
//                 break;
//             }
//         }
//     }
// }

// // efficient program to find the missing number in a array
#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[5] = {4, 1, 2, 2, 1};
    for(int i = 0; i < 5; i++) { 
        bool flag = false;
        for(int j = 0; j < 5; j++) {
            if(i != j && arr[i] == arr[j]) {
                flag = true;
            }
        }
        if(flag == false) {
            printf("%d", arr[i]);
            break;
        }
    }
}
