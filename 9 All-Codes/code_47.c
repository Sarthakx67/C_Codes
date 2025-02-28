//  print the factorial of the given numbers
 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
    }printf("%d\n",factorial);
    }