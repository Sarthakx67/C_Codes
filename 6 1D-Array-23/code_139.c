// wap to rotate the given array arr by given k steps
// k can be greater than n

#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        }           
    return;
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
        for(int i=0;i<n;i++){
            printf("Enter %d array : ",i+1);
            scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the number of rotations : ");
    scanf("%d",&k);
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Your Rotated Array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}