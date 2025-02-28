// wap to print n to 1

#include<stdio.h>
void decreasing(int n){
    if(n==0){return;}
    printf("%d\n",n);
    decreasing(n-1);
    return ;
    }
int main(){
    int n;
    printf("input the number : ");
    scanf("%d",&n);
    decreasing(n);
}