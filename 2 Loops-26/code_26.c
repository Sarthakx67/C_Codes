#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){       // You can do this 
        printf("Hello World \n");
    } 
                                
                                 // OR                           
    int i;                       // you can take int i out of loop to make print function work 
    for(i=1;i<=6;i++){           // out of the loop
        printf("\nHello world!!!");
        printf("\n%d",i);
    }
    printf("\nValue of i in end : %d",i);
    return 0;


}