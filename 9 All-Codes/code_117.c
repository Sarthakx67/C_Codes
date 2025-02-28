// calculate the sum of all numbers in the given array

#include<stdio.h>
int main(){
    int sum = 0;
    int arr[5] ={0,1,2,3,4};
    for(int i=1;i<=5;i++){
        int a = arr[i];
        sum = sum + a;
    }
    printf("%d",sum);
}