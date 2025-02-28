// wap to print all the ascii values and their equivalent character of 26 alphabet 

#include<stdio.h>
int main(){
        // what is type casting
        for(int i=65;i<=90;i++){
            char ch = (char)i;
        //The (char) before the i tells the compiler to treat the integer i as a character.
            printf("%c -> ",ch);
            printf("%d\n",i);
        }
}