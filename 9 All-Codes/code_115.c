// arrays 

#include<stdio.h>
int main(){
    int arr[40];
    printf("enter first number : ");
    scanf("%d",&arr[0]);
    printf("enter second number : ");
    scanf("%d",&arr[1]);
    printf("enter third number : ");
    scanf("%d",&arr[2]);
    
    for(int i=0;i<=3;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<=5;i++){
        scanf("%d\n",&arr[i+5]);
    }
    for(int i=5;i<=10;i++){
        printf("%d\n",arr[i]);
    }
}