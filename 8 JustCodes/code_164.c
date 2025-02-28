// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=3;j>=i;j--){
//             printf("#");
//         }
//         for(int k='A';k<='A'+i-1;k++){
//             printf("%c",k);
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
int main() {
    int n = 4; // Number of rows (and columns)
    // Loop for each row
    for (int i = 0; i < n; i++) {
        // Loop for each column
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                // Print '#' for the first part of the row
                printf("# ");
            } else {
                // Print the respective character starting from 'A'
                printf("%c ", 'A' + (j - (n - i - 1)));
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}

