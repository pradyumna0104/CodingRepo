//design a moore nachine for operation m mod 3 where m is a binary string
#include <stdio.h>

enum states {
    STATE0,
    STATE1,
    STATE2
};

enum inputs {
    ZERO,
    ONE
};

int mod3(char* binaryString) {
    int state = STATE0;
    int i = 0;

    while (binaryString[i] != '\0') {
        int input = binaryString[i] - '0'; 

        switch (state) {
            case STATE0:
                if (input == ONE)
                    state = STATE1;
                break;

            case STATE1:
                if (input == ZERO)
                    state = STATE2;
                else
                    state = STATE0;
                break;

            case STATE2:
                if (input == ZERO)
                    state = STATE1;
                break;
        }

        i++;
    }

    return state;
}

int main() {
    char binaryString[100];
    printf("Enter binary string: ");
    scanf("%s", binaryString);

    int result = mod3(binaryString);
    printf("Result of m mod 3: %d\n", result);

    return 0;
}
