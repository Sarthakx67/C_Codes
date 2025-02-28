// wap to find the difference between the sum of elements at even indices to the sum of
// elements at odd indices 

#include<stdio.h>
int main(){
    int n[6] = {1,2,3,4,5,6};
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=1;i<=6;i++){
        if(i%2==0){
            sumEven += n[i];
        }else
            sumOdd += n[i];
    }
    printf("%d",sumEven-sumOdd);
    return 0;
}