// wap to check if array is palindrome or not

#include<stdio.h>
void checkPalindrome(int a[]){
    int i=0;
    int j=5;
    while(i<j){
        if(a[i]==a[j]){
            printf("this is a palindrome");
        }
        if(a[i]!=a[j]){
            break;
            printf("this is not a palindrome");
        i++;
        j--;
        }
    }
    return;
}
int main(){
    int a[6] = {3,4,5,5,4,3};
    checkPalindrome(a);
}