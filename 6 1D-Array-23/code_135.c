// wap to reverse array

#include<stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n = 7;
    int k = 50;
    k = k%n;    
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=6;i++){
        printf("%d",arr[i]);
    }
}