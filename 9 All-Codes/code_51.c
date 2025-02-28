// wap to print all the ascii values and their equivalent character of 26 alphabet 

#include<stdio.h>
int main(){
        // what is type casting
        for(int i=65;i<=90;i++){
            char ch = (char)i;
            printf("%c -> ",ch);
            printf("%d\n",i);
        }
}