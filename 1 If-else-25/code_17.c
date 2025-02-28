// program to find if input is a 3 digit number or not

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // if(n>5){
    //     if(n<10){
    //         printf("it is greater than 5 and less than 10");
    //     }else{printf("it is greater than 10");}
    // }else{printf("it is smaller than 5");}
                                      //OR
        if(n>99 && n<1000){
            printf("it is a 3 digit number");
        }else{printf("it is not a three digit number");}
}