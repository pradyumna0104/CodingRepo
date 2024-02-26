//starting with a and end with b
#include <stdio.h>

int dfa = 0;

void stateA(char n) {
    // Transition from state A to B if input is 'a'
    if (n == 'a')
        dfa = 1;
    else
        dfa = -1; // Invalid transition, go to dead state
}

void stateB(char n) {
    // Remain in state B if input is 'a'
    if (n == 'a')
        dfa = 1;
    // Transition to final state if input is 'b'
    else if (n == 'b')
        dfa = 2;
    else
        dfa = -1; // Invalid transition, go to dead state
}

void stateC(char n) {
    // Remain in state B if input is 'a'
    if (n == 'b')
        dfa = 2;
    // Transition to final state if input is 'b'
    else if (n == 'a')
        dfa = 1;
    else
        dfa = -1; // Invalid transition, go to dead state
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int i;
    for (i = 0; input[i] != '\0'; i++) {
        if (dfa == 0)
            stateA(input[i]);
        else if (dfa == 1)
            stateB(input[i]);
        else if (dfa == 2)
            stateC(input[i]);
        else
            break; // Break loop if dead state is reached
    }

    // Check if DFA ended in state C (accepting state) and if the string has ended
    if (dfa == 2 && input[i] == '\0')
        printf("Accepted\n");
    else
        printf("Not Accepted\n");

    return 0;
}
