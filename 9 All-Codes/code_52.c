// code to find out the armstrong value from 1 to 500

#include <stdio.h>
int main(){
    int n;
    int lastdigit;
    int sum;    
    int i=1;
    while (i<=500){
        n=i;
        sum=0;
        while (n){
            lastdigit=n%10;
            sum=sum+lastdigit*lastdigit*lastdigit;
            n=n/10;
        }
        if (i==sum){
            printf("%d is an Armstrong number.\n",i);
        }
        i++;
    }
    return 0;
}