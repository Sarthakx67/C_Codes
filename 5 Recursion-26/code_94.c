// print sum from 1 to n parameterised

#include<stdio.h>
void sum(int n,int s){
    if(n==0)
    {printf("%d\n",s);
    return;
    }
    sum(n-1,n+s);
    return;
}
int main(){
    int n = 5;
    sum(n,0);
    return 0;
}