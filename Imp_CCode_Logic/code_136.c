//given an array containing elements from 1 to 6
//except one element in this range is missing find the missing element

#include<stdio.h>
int main(){
    int arr[6] = {1,2,3,4,0,6};
    int sum = 0;
    for(int i=0;i<=5;i++){
        sum = sum + arr[i];
    }
    int sum2 = 6*(6+1)/2;
    int x = sum2 -sum;
    printf("%d",x);
}