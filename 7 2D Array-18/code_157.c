// // wap to scan a matrix in spiral form
// // mind using question

// // in this we have to scan a matrix in spiral form

// #include<stdio.h>
// int main(){
//     int m;
//     printf("input no of rows of matrix : ");
//     scanf("%d",&m);
//     int n;
//     printf("input no of coloumns ofmatrix : ");
//     scanf("%d",&n);
//     int arr[m][n];
//     printf("input matrix : \n");

//     printf("\n");
//     // print spiral
//     int minr = 0;
//     int maxr = m-1;
//     int minc = 0;
//     int maxc = n-1;
//     int tne = m*n;
//     int count = 0;

//     while(count<tne){
//         // print the minimum row
//         for(int i=minc;i<=maxc&&count<tne;i++){
//             scanf("%d ",&arr[minr][i]);
//             count++;
//         }
//         minr++;
//         // print the maximum coloumn
//         for(int i=minr;i<=maxr&&count<tne;i++){
//             scanf("%d ",&arr[i][maxc]); 
//             count++;
//         }
//         maxc--;
//         // print the max row
//         for(int i=maxc;i>=minc&&count<tne;i--){
//             scanf("%d ",&arr[maxr][i]);
//             count++;
//         }
//         maxr--;
//         // print the min coloumn
//         for(int i=maxr;i>=minr&&count<tne;i--){
//             scanf("%d ",&arr[i][minc]);
//             count++;
//         }
//         minc++;
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//     printf("\n");
//     }
// }

