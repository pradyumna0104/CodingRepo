//bab as a substring
#include <stdio.h>
int nfa = 0;
void stateA(char n){
    if(n == 'a')       nfa = 0;
    else if(n == 'b')  nfa = 1;
    else               nfa = -1;
}
void stateB(char n){
    if(n == 'a')       nfa = 2;
    else if(n == 'b')  nfa = 1;
    else               nfa = -1;
}
void stateC(char n){
    if(n == 'a')       nfa = 0;
    else if(n == 'b')  nfa = 3;
    else               nfa = -1;
}
void stateD(char n){
    if(n == 'a')       nfa = 3;
    else if(n == 'b')  nfa = 3;
    else               nfa = -1;
}
int main(){
    char input[100];
    printf("enter a string (a & b) : ");
    scanf("%s",input);
    int i = 0;
    for ( i = 0; input[i] != '\0'; i++)
    {
        if(nfa == 0)        stateA(input[i]);
        else if(nfa == 1)   stateB(input[i]);
        else if(nfa == 2)   stateC(input[i]);
        else                stateD(input[i]);
    }
     
     if(nfa == 3 && input[i] == '\0')     printf("Accepted.\n");
     else                                 printf("Not Accepted.\n");
    return 0;
}