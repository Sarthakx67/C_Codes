// find the second largest number in the array

#include<stdio.h>
#include<limits.h>
int main(){
    int x = 0;
    int sx = INT_MIN;
    int a[8] = {1,10,3,15,5,6,7,9};
    for(int i=1;i<=8;i++){
        if(a[i]>x){
            x=a[i];
        }
        if(sx<a[i] && x!=a[i]){
            sx = a[i];
        }
    }printf("%d",sx);
}
