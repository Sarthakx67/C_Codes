// wap to print matrix in snake form
// mind using question

#include<stdio.h>
int main(){
    int m;
    printf("input no of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("input no of coloumns of 1st matrix : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("input first matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
        for(int j=0;j<n;j++){
            if(j%2==0){
                for(int i=m-1;i>=0;i--){{
                    printf("%d ",arr[i][j]);
                    }
                }
            }
            else{
                for(int i=0;i<m;i++){{
                    printf("%d ",arr[i][j]);
                    }
                }
            }
        }
    }