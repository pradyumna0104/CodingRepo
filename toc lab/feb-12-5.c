/*
nfa with following transition diagram
there are 3 state Q0 , Q1 & Q2 
state Q0 to 0 is state Q0 ,state Q1 to 0 is state Q1,and state Q0 to 1 is state Q2 
state Q1 to 0 is state Q1 and state Q1 to 1 is state Q2 
state Q2 to 1 is state Q2 
*/
#include <stdio.h>
int dfa = 0;
void stateA(char n){
    if(n == '0')         dfa = 0;
    else if(n == '1')    dfa = 1;
    else                 dfa = -1;
}

void stateB(char n){
    if(n == '1')         dfa = 1;
    else                 dfa = -1;
}
int main() {
    char input[100];
    printf("Enter a string(0 & 1): ");
    scanf("%s", input);

    int i;
    for (i = 0; input[i] != '\0'; i++) {
        if (dfa == 0)           stateA(input[i]);
        else if (dfa == 1)      stateB(input[i]);
        else                    break;
    }

    if (dfa == 1 && input[i] == '\0')   printf("Accepted\n");
    else                                printf("Not Accepted\n");
    return 0;
}