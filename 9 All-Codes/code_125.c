// wap to find total numbers of triplest in the array whose sum is equal 
// to the given value x

#include<stdio.h>
int main(){
    int count = 0;
    int n;
    scanf("%d",&n);
    int a[8] = {1,2,3,4,5,6,7,8};
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            for(int k=1;k<=8;k++){
                if(a[i]+a[j]+a[k]==n){
                count++;
                }
            }
       }
    }printf("%d",count);
}