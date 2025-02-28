// wap to print a matrix in spiral form
// mind using question
// leetcode - 54


#include<stdio.h>
int main(){
    int m;
    printf("input no of rows of matrix : ");
    scanf("%d",&m);
    int n;
    printf("input no of coloumns ofmatrix : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("input matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    // print spiral
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;

    while(count<tne){
        // print the minimum row
        for(int i=minc;i<=maxc&&count<tne;i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        minr++;
        // print the maximum coloumn
        for(int i=minr;i<=maxr&&count<tne;i++){
            printf("%d ",arr[i][maxc]); 
            count++;
        }
        maxc--;
        // print the max row
        for(int i=maxc;i>=minc&&count<tne;i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
        // print the min coloumn
        for(int i=maxr;i>=minr&&count<tne;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
}