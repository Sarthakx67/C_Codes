// make a function which calculates a raised to power b using recursion

#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    int p = a*power(a,b-1);
    return p;
}
int main(){
    int a = 3;
    int b = 3;
    int s = power(a,b);
    printf("%d",s);
}