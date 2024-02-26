/*
wap in c to design a moore machine to define given set of a binary input string the respective output will generate
data given: question there are 3 state a , b & c .
for state a output is 0,
for state b output is 0,
for state c output is 1,
and transition are 
state a to 0 is state a and state a to 1 is state b 
state b to 0 is state a and state b to 1 is state c 
state c to 0 is state c and state c to 1 is state a 
*/
#include <stdio.h>

typedef enum {
    STATE_A,
    STATE_B,
    STATE_C
} State;

State transition(State current_state, int input) {
    if (current_state == STATE_A) {
        if (input == 0) return STATE_A;
        else return STATE_B;
    } else if (current_state == STATE_B) {
        if (input == 0) return STATE_A;
        else return STATE_C;
    } else { 
        if (input == 0) return STATE_A;
        else return STATE_C;
    }
}

int get_output(State current_state) {
    if (current_state == STATE_A || current_state == STATE_B) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    char input_string[100];
    printf("Enter a binary string: ");
    scanf("%s", input_string);

    State current_state = STATE_A;

    printf("Output: ");
    for (int i = 0; input_string[i] != '\0'; i++) {
        int current_input = input_string[i] - '0'; 
        current_state = transition(current_state, current_input);
        printf("%d", get_output(current_state));
    }
    printf("\n");

    return 0;
}
