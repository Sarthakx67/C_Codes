// wap to print numbers from decreasing to increasing order 

#include<stdio.h>
void decinc(int n){
    if(n==0)return;
    printf("%d\n",n);
    decinc(n-1);// call back function || recursion
    printf("%d\n",n);
    return;
}
int main(){
    int n = 4;
    decinc(n);
}