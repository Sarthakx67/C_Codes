// changing the value or swapping the vaue of a and b 
// by using pointers 

#include<stdio.h>
void swap(int*x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}

int main(){
    int a = 4;
    int b = 5;
    swap(&a,&b);
    printf("%d\n%d",a,b);
}