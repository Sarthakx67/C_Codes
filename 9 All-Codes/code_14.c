// program to find the absolute number of the inputed number
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
        if(n<0){
        int b = -1 * n;
        printf("%d",b);
    }else{printf(n);}
}