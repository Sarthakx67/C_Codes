// program to find the missing number in a array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
            scanf("%d",&arr[i]);
    }
    printf("array is : ");
    for(int i=0;i<n-1;i++){
            printf("%d",arr[i]);
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n-1;i++){
        sum1 += arr[i];
        // printf("s1 %d\n",sum1);
    }
    
    for(int i=0;i<n;i++){
        sum2 += i+1;
        // printf("s2 %d\n",sum2);
    }
    
    int missno = sum2-sum1;
    printf("\nmissing number : %d",missno);
}