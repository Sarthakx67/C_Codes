// // wap to print transpose of the marix and store it in another array

// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter row number : ");
//     scanf("%d",&r);
//     int c;
//     printf("enter coloumn number : ");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int brr[c][r];
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             brr[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int brr[3][2];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];  
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}