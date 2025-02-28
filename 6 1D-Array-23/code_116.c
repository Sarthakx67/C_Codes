// // take marks of 10 student and print roll no of student with less than 35 marks

// #include<stdio.h>

// int main(){
//     int a[10];
//     for(int i=1;i<=10;i++){
//         printf("Input Number %d : ",i);
//         scanf("%d",&a[i]);
//     }
//     printf("\nStudents scored less than 35 marks are : \n");
//     for(int i=1;i<=10;i++){
//         if(a[i]<35){
//             printf("Roll Number %d have %d marks\n",i,a[i]);
//         }
//     }
// }

// take marks of 10 student and print roll no of student with less than 35 marks

#include<stdio.h>
int main(){
    int arr[10];
    for(int i=1;i<=10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=10;i++){
        if(arr[i]<35){
            printf("%d scored %d which is less than 35 marks\n",i,arr[i]);
        }
    }
}