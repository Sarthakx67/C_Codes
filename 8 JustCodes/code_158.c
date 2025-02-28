//using array as string 

#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = {'a','t','l','a','s'};
    char str[] = {"hello world i am your coder"};
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    for(int i='\0';i>=0;i--){
        printf("\n%c",str[i]);
    }
    // or
    printf("\n%s",str);
}