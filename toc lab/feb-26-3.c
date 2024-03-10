//regular grammar for L = { a^n  | where n is a even number} 
#include <stdio.h>

// Function to generate strings with even number of 'a' characters
void generateStrings(int n) {
    // Ensure n is even
    if (n % 2 != 0) {
        printf("Error: n must be an even number.\n");
        return;
    }

    // Generate string
    for (int i = 0; i < n; i ++) {
        printf("a");
    }
    printf("\n");
}

int main() {
    int n;

    // Input even number 'n'
    printf("Enter an even number n: ");
    scanf("%d", &n);

    // Generate strings
    printf("Strings with even number of 'a' characters:\n");
    generateStrings(n);

    return 0;
}
/*
o/p:
Enter an even number n: 3
Strings with even number of 'a' characters:
Error: n must be an even number.

Enter an even number n: 4
Strings with even number of 'a' characters:
aaaa
*/