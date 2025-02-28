// wap to multiply 2 matrix 
// mind using question

#include<stdio.h>
int main(){
    int m;
    printf("input no of rows od 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("input no of coloumns of 1st matrix : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("input first matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //scan for brr
    int p;
    printf("input no of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("input no of coloumns of 2nd matrix : ");
    scanf("%d",&q);
    int brr[p][q];
    printf("input second matrix : \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    // check
   if(n!=p){
        printf("the matrix cannot be multiplied");
   } 
   else{
    // multiplication
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            // i row of a , jcoloumn of b
            for(int k=0;k<n;k++){
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    printf("\n");
    printf("multiplied matrix = \n");
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
            }
        printf("\n");
        }
    }
}

// #include<stdio.h>
// int main(){
//     int arr[2][2] = {1,2,3,4};
//     int brr[2][2] = {1,2,3,4};
//     int crr[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             crr[i][j] = 0;
//             for(int k=0;k<2;k++){
//                 crr[i][j] += arr[i][k]*brr[k][j];
//             } 
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",crr[i][j]);
//         }printf("\n");
//     }
// }