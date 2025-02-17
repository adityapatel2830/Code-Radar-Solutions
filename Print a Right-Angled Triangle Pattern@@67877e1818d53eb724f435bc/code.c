#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // Outer loop: controls rows (from n down to 1)
        for (int j = 1; j <= i; j++) { // Inner loop: controls stars in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}