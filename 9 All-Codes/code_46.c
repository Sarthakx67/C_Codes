// print the sum of these series
// 1-2+3-4+5-6+7 ------  n

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){    
        if(i%2!=0){
            sum = sum + i;
            }else{sum = sum - i;
        }
    }printf("%d",sum);
}