// // wap to print reverse of array without using any extra array 

// #include<stdio.h>
// void reverse(int a[]){
//     int i = 0;
//     int j = 6;
//     while(i<j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main(){
//     int a[7] = {1,2,3,4,5,6,7};
//     reverse(a);
//     for(int i=0;i<=6;i++){
//         printf("%d",a[i]);
//     }
// }

#include<stdio.h>
void reverse(int arr[],int n){
    int i = 0;
    int j = n;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i]= temp; 
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d element = ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    for(int i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
}