// // wap to store roll numbers  and marks obtained by 4 students side by side in a matrix

// #include<stdio.h>
// int main(){
//     int arr[4][2];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             if(j==0){
//                 printf("enter roll number of student : ");
//             }else{printf("enter marks obtained by student : ");}
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// // wap to store roll numbers and marks obtained by 4 students side by side in a matrix
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

