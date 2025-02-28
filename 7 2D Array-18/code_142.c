// // // wap to add two matrix 

// // #include<stdio.h>
// // int main(){
// //     int res[2][2];
// //     int a[2][2] = {1,2,3,4};
// //     int b[2][2] = {5,6,7,8};
// //     for(int i=0;i<2;i++){
// //         for(int j=0;j<2;j++){
// //             res[i][j] = a[i][j] + b[i][j]; 
// //         }
// //     }
// //     printf("\n");
// //     for(int i=0;i<2;i++){
// //         for(int j=0;j<2;j++){
// //             printf("%d ",res[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // wap tto add two matrix

// #include<stdio.h>
// int main(){
//     int r1;
//     scanf("%d",&r1);
//     int c1;
//     scanf("%d",&c1);
//     int arr[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//         int r2;
//     scanf("%d",&r2);
//     int c2;
//     scanf("%d",&c2);
//     int brr[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     int sum[r1][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             sum[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             printf("%d ",sum[i][j]);
//         }printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    // Input dimensions for both matrices
    int r1, c1, r2, c2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Ensure matrices have the same dimensions for addition
    if (r1 != r2 || c1 != c2) {
        printf("Matrices dimensions do not match for addition.\n");
        return 1;
    }

    // Declare matrices
    int arr[r1][c1], brr[r2][c2], sum[r1][c1];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Add matrices
    printf("Sum of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
