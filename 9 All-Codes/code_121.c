// take a array change valu of odd indexedelements to its second multiple and increment
// all even number indexed value  by 10

#include<stdio.h>
int main(){
    int a[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            a[i]=2*a[i];
        }else{a[i]=a[i]+10;};
    }
    for(int i=0;i<=6;i++){
        printf("%d \n",a[i]);
    }   
}