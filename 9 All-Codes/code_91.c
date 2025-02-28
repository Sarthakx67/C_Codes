// print incresing value upto n using recursiom 

#include<stdio.h>
void increasing(int x,int y){
    if(x>y)return;
    printf("%d\n",x);
    increasing(x+1,y);
    return;
}
int main(){
    int n = 25;
    int x = 1;
    increasing(x,n);
}