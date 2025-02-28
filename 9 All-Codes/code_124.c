// wap to find total numbers of pairs in the array whose sum is equal to the given value x

#include<stdio.h>
int main(){
    int count = 0;
    int n;
    scanf("%d",&n);
    int a[8] = {1,2,3,4,5,6,7,8};
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(a[i]+a[j]==n){
                count++;
            }
        }
    }printf("%d",count);
}