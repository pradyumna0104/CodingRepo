//regular grammar for L = { a^n b^m | where n,m>=1 } 
#include <stdio.h>

// Function to generate strings according to the regular grammar for L
void generateStrings(int n, int m) {
    // Ensure n and m are at least 1
    if (n < 1 || m < 1) {
        printf("Error: n and m must be at least 1.\n");
        return;
    }
    // Generate string
    for (int i = 0; i < n; i++) {
        printf("a");
    }
    for (int j = 0; j < m; j++) {
        printf("b");
    }
    printf("\n");
}

int main() {
    int n, m;
    
    // Input values for n and m
    printf("Enter values for n and m (both >= 1): ");
    scanf("%d %d", &n, &m);
    
    // Generate strings
    printf("Strings for L = { a^n b^m | where n,m >= 1 }:\n");
    
    generateStrings(n, m);
    
    return 0;
}
/*
o/p:
Enter values for n and m (both >= 1): 3 4
Strings for L = { a^n b^m | where n,m >= 1 }:
aaabbbb
*/