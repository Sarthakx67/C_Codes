// wap to rotate a matrix 90 degree clockwise 
// in this we dont have change the value of array we only have swap the order of
// the loop to make it look like it is swapped
// leetcode-48

#include<stdio.h>
int main(){
    int n;
    printf("enter row/coloumn number : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}