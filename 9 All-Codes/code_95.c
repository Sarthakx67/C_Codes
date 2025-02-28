// same question as code_94
// print sum from 1 to n 
// using different method

#include<stdio.h>
int sum(int n){
    if(n==1){return 1;}
    int recall = n + sum(n-1);
    return recall;
}
int main(){
    int n = 5;
    int add = sum(n);
    printf("%d",add);
}