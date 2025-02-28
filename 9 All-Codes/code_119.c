// find the minimum value out of all the elements in an array

#include<stdio.h>
int main(){
    int a[8]={9,2,11,13,3,4,8,7};
    int min = a[0];
    for(int i=0;i<=7;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d",min);
}