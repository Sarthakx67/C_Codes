// wap to count the number of elements greater than a given number n in a array

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int a[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        if(n<a[i]){
            count +=1;
        }
    }
    printf("%d",count);
}