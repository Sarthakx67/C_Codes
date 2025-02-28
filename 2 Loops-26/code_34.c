// display the gc upto n terms gp-3,12,48

#include <stdio.h>
#include <math.h>

int main() {
    int a = 3; // First term
    int r = 4; // Common ratio
    int n = 10; // Number of terms

    printf("Geometric Progression:\n");
    for (int i = 0; i < n; i++) {
        int term = a * pow(r, i); 
        printf("%d ", term);
    }
    printf("\n");

    return 0;
}