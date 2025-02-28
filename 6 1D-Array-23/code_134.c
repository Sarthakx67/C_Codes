// wap to reverse a part of array

#include<stdio.h>
void reverse(int a[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}
int main(){
    int a[7] = {1,2,3,4,5,6,7};// output should be 5,6,7,1,2,3,4
    reverse(a,0,6);
    for(int i=0;i<=6;i++){
        printf("%d",a[i]);
    }
}