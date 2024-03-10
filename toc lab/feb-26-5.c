//wap in c to design for regular grammar for L = { a^n b^2n | where n >= 1 } 

#include <stdio.h>

// Function to generate strings according to the regular grammar for L
void generateStrings(int n) {
    // Ensure n is at least 1
    if (n < 1) {
        printf("Error: n must be at least 1.\n");
        return;
    }
    // Generate string
    for (int i = 0; i < n; i++) {
        printf("a");
    }
    for (int j = 0; j < 2 * n; j++) {
        printf("b");
    }
    printf("\n");
}

int main() {
    int n;

    // Input value for n
    printf("Enter a value for n (>= 1): ");
    scanf("%d", &n);

    // Generate strings
    printf("Strings for L = { a^n b^2n | where n >= 1 }:\n");
    generateStrings(n);

    return 0;
}

/*
o/p:
Enter a value for n (>= 1): 3
Strings for L = { a^n b^2n | where n >= 1 }:
aaabbbbbb
*/