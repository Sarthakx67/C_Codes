// wap to print the row number which have the maximum sum in the given matrix

#include<stdio.h>
int main(){
    int arr[3][4] ={{1,2,3,4},{5,4,3,2},{3,4,1,1}};     
    int sum =0;
    int maxidx = 0;
    int maxSum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
            if(maxSum<sum){
                maxSum=sum;
                maxidx=i;
            }
        }
    }
    printf("%d %d",maxidx,maxSum);
}