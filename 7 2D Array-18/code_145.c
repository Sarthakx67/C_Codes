// wap to find the maximum element in array and its index

#include<stdio.h>
int main(){
    int m = 2;
    int n = 2;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int a = 0;
    int x ;
    int y ;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]>a){
                a = arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("the maximum element of %d row and %d coloumn in the array is : %d",x,y,a);
}