#include<stdio.h>
int squart(int a){
    for(int i=1;i<=10;i++){
        int b = i * i;
        if(b==a){
        return i;
        break;
    }
    }
}
int main(){
    int a = 100;
    int b = squart(a);
    printf("%d",b);
}