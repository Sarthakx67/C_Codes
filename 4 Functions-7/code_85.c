// SWAPPING OF TWO NUMBERS USING POINTERS --

#include<stdio.h>

void swap(int*a,int*b){
    int temp;
    temp = *a;// idher *a ek number h to wo int me store ho skta ha
    *a = *b; // *a us address ki value h jo a ke andar store tha
    *b = temp; 
    return;
}

int main(){
    int a = 1;
    int b = 19898;
    swap(&a,&b);
    printf("%d\n%d",a,b);
}