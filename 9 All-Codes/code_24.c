// write a program to find on which axis does a linr lie
#include <stdio.h>
int main(){
     int x;
     scanf("%d",&x);
     int y;
     scanf("%d",&y);
     if (x == 0 && y >= 1){
        printf("it lies on x axis");
     }
     else if(x >= 1 && y==0){
        printf("it lies on y axis");
     }
     else if(x == 0 && y == 0){
        printf("it is at origin");
     }
     else{printf("not on both x and y axis");}
}