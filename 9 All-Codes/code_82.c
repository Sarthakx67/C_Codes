// program to know pointers

#include<stdio.h>
int main(){
    int a = 5;
    printf("    Value Stored in a : %d",a);
    printf("\n  Address of Variable a : %p",&a);
    int *x = a;
    printf("\n  Value of a Stored in Pointer x : %d",x);
    printf("\n  Address of Pointer x : %p",&x);
}