//regular expression for a*(a+b)b*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a given string matches the regular expression
bool matchRegex(char *str) {
    int len = strlen(str);
    int i = 0;

    // Check for a*
    while (i < len && str[i] == 'a') {
        i++;
    }

    // Check for (a+b)
    if (i < len && (str[i] == 'a' || str[i] == 'b')) {
        i++;
    } 
    // Check for b*
    while (i < len && str[i] == 'b') {
        i++;
    }

    // Check if entire string has been consumed
    return i == len;
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string matches the regular expression
    if (matchRegex(str)) {
        printf("String matches the regular expression.\n");
    } else {
        printf("String does not match the regular expression.\n");
    }

    return 0;
}

/*
o/p:
Enter a string: aaaab
String matches the regular expression.

Enter a string: b
String matches the regular expression.

Enter a string: a
String matches the regular expression.

Enter a string: ba
String does not match the regular expression.

Enter a string: abbbab
String does not match the regular expression.
*/