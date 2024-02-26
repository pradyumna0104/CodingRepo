//starrt with aa and end with bb
#include <stdio.h>

int dfa = 0;

void stateA(char n) {
    if (n == 'a')
        dfa = 1;
    else
        dfa = -1; 
}

void stateB(char n) {
    if (n == 'a')
        dfa = 2;
    else
        dfa = -1; 
}

void stateC(char n) {
    if (n == 'a')
        dfa = 2;
    else if (n == 'b')
        dfa = 3;
    else
        dfa = -1; 
}

void stateD(char n) {
    if (n == 'a')
        dfa = 2;
    else if (n == 'b')
        dfa = 4;
    else
        dfa = -1; 
}

void stateE(char n) {
    if (n == 'a')
        dfa = 2;
    else if (n == 'b')
        dfa = 4;
    else
        dfa = -1; 
}

int main() {
    char input[100];
    printf("Enter a string(a & b): ");
    scanf("%s", input);

    int i;
    for (i = 0; input[i] != '\0'; i++) {
        if (dfa == 0)
            stateA(input[i]);
        else if (dfa == 1)
            stateB(input[i]);
        else if (dfa == 2)
            stateC(input[i]);
        else if (dfa == 3)
            stateD(input[i]);
        else if (dfa == 4)
            stateE(input[i]);
        else
            break;
    }

    if (dfa == 4 && input[i] == '\0')
        printf("Accepted\n");
    else
        printf("Not Accepted\n");

    return 0;
}