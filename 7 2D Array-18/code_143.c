// // wap to find the maximum element in array and its index

// #include<stdio.h>
// int main(){
//     int m = 2;
//     int n = 2;
//     int arr[m][n];
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     int a = 0;
//     int x ;
//     int y ;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(arr[i][j]>a){
//                 a = arr[i][j];
//                 x=i;
//                 y=j;
//             }
//         }
//     }
//     printf("the maximum element of %d row and %d coloumn in the array is : %d",x,y,a);
// }

// wap to find the largest number in the array
#include<stdio.h>
int main(){
    int r;
    printf("enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("enter no of coloumns :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int largest = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>largest){
                largest = arr[i][j];
            }
        }
    }
    printf("%d",largest);
}
