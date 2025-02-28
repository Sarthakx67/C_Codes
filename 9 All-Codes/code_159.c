// puts and gets

#include<stdio.h>
int main(){
    char str[40];
    //scanf("%s",str);  // only scan the first word
    gets(str);// entire sentence can be taken input
    //printf("%s",str); // used to print the string
    puts(str); // used to print the full string
}