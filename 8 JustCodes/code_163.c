// #include<stdio.h>
// int main(){
//     // int a;
//     // printf("Enter the First Number : ");
//     // scanf("%d",&a);
//     // int b;
//     // printf("Enter the Second Number : ");
//     // scanf("%d",&b);
//     // printf("Addition : %d\n",a+b);
//     // printf("Substraction : %d\n",a-b);
//     // printf("Multiplication : %d\n",a*b);
//     // printf("Division : %d\n",a/b);
//     int a = 5;
//     printf("%d\n",a++ + ++a);
//     int b = 5;
//     printf("%d",++b + ++b);
// }
#include<stdio.h>
int main(){
    for(int i=65;i<=70;i++){
        for(int j=70;j>=i;j--){
            printf("#");
        }
        for(int k=65;k<=70;k++){
            printf("%c",k);
        }
        printf("\n");
    }
}