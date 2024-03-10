//regular expression for a(a+b)* + ba*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a given string matches the regular expression a(a+b)*
bool matchRegex1(char *str) {
    int len = strlen(str);
    int i = 0;
    
    // Check for 'a'
    if (str[i] == 'a') {
        i++;
    } else {
        return false;
    }
    
    // Check for (a+b)*
    while (i < len && (str[i] == 'a' || str[i] == 'b')) {
        i++;
    }
    
    // Check if entire string has been consumed
    return i == len;
}

// Function to check if a given string matches the regular expression ba*
bool matchRegex2(char *str) {
    int len = strlen(str);
    int i = 0;
    
    // Check for 'b'
    if (str[i] == 'b') {
        i++;
    } else {
        return false;
    }
    
    // Check for 'a*'
    while (i < len && str[i] == 'a') {
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
    
    // Check if the string matches the regular expression a(a+b)* or ba*
    if (matchRegex1(str) || matchRegex2(str)) {
        printf("String matches the regular expression.\n");
    } else {
        printf("String does not match the regular expression.\n");
    }
    
    return 0;
}
/*
o/p:
Enter a string: ababab
String matches the regular expression.

Enter a string: bababaa
String does not match the regular expression.

Enter a string: baaaa
String matches the regular expression.
*/