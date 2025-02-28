// program to get familier with pointers

#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    printf("this will print value of a : %d\n",a);
    printf("this will print address of a : %p\n",&a);
    printf("this will print value stored in pointer x : %p\n",x);
    printf("this will print address of pointer x : %p\n",&x);
    printf("this will print value stored by address stored in pointer x : %d\n",*x);
    return 0;
}