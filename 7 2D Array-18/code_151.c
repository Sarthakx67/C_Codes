// // wap to rotate a matrix 90 degree clockwise 
// // in this we dont have change the value of array we only have swap the order of
// // the loop to make it look like it is swapped
// // leetcode-48

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter row/coloumn number : ");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>=0;j--){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //123 741
    //456 852
    //789 963
    int brr[3][3];
    // for(int i=2;i>=0;i--){
    //     for(int j=0;j<3;j++){
    //         brr[i][j] = arr[i][j]; 

    //     }
    // }
    for(int j=0;j<3;j++){
        for(int i=2;i>=0;i--){      
            brr[i][j] = arr[i][j];
        }
    }
    for(int i=0;i<3;i++){  
        for(int j=0;j<3;j++){
            printf("%d",brr[i][j]);
        }printf("\n");
    }
}