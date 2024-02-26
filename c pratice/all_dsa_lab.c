/*   //insert an element an array ,position given by user
#include <stdio.h>

void insertElement(int arr[], int *size, int pos, int element) {
    if (pos < 0 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }/

    // Shift elements to make space for the new element
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[pos] = element;

    // Update the size of the array
    (*size)++;
}

int main() {
    int arr[100], size, pos, element;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position to insert
    printf("Enter the position to insert (0-indexed): ");
    scanf("%d", &pos);

    // Get the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Call the function to insert the element
    insertElement(arr, &size, pos, element);

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

*/
/*   //to find a string and a number is palindrome or not
#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isStringPalindrome(const char* str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum) ? 1 : 0; // Palindrome if original equals reversed
}

int main() {
    char str[100];
    int num;

    // Get input string
    printf("Enter a string: ");
    scanf("%s", str);

    if (isStringPalindrome(str)) {
        printf("The string is a palindrome!\n");
    } else {
        printf("The string is not a palindrome!\n");
    }

    // Get input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNumberPalindrome(num)) {
        printf("The number is a palindrome!\n");
    } else {
        printf("The number is not a palindrome!\n");
    }

    return 0;
}

*/
/*    //check given set of parenthesis is valid or not
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    int top;
    char items[MAX_SIZE];
};

// Function to push an element onto the stack
void push(struct Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    } else {
        s->items[++(s->top)] = c;
    }
}

// Function to pop an element from the stack
char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    } else {
        return s->items[(s->top)--];
    }
}

// Function to check if parentheses are balanced
int areParenthesesBalanced(char* exp) {
    struct Stack s;
    s.top = -1;
    int i = 0;

    while (exp[i] != '\0') {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(&s, exp[i]);
        } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (s.top == -1) {
                return 0; // Unbalanced parentheses
            }

            char popped = pop(&s);

            if ((exp[i] == ')' && popped != '(') ||
                (exp[i] == ']' && popped != '[') ||
                (exp[i] == '}' && popped != '{')) {
                return 0; // Mismatched parentheses
            }
        }

        i++;
    }

    return (s.top == -1) ? 1 : 0; // Check if there are any remaining unmatched opening parentheses
}

int main() {
    char expression[MAX_SIZE];

    // Get input expression
    printf("Enter expression: ");
    gets(expression);

    if (areParenthesesBalanced(expression)) {
        printf("Parentheses are balanced!\n");
    } else {
        printf("Parentheses are not balanced!\n");
    }

    return 0;
}

*/
/*   //convert infix to postfix and evaluate the value
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    int top;
    char items[MAX_SIZE];
};

// Function to push an element onto the stack
void push(struct Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    } else {
        s->items[++(s->top)] = c;
    }
}

// Function to pop an element from the stack
char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    } else {
        return s->items[(s->top)--];
    }
}

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get the precedence of an operator
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    else if (c == '*' || c == '/') return 2;
    else return 0;
}

// Function to convert infix to postfix
void infixToPostfix(char* infix, char* postfix) {
    struct Stack s;
    s.top = -1;
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (infix[i] >= '0' && infix[i] <= '9') {
            postfix[j++] = infix[i++];
        } else if (infix[i] == '(') {
            push(&s, infix[i++]);
        } else if (infix[i] == ')') {
            while (s.top != -1 && s.items[s.top] != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s);
            i++;
        } else if (isOperator(infix[i])) {
            while (s.top != -1 && precedence(s.items[s.top]) >= precedence(infix[i])) {
                postfix[j++] = pop(&s);
            }
            push(&s, infix[i++]);
        } else {
            printf("Invalid character in expression!\n");
            exit(EXIT_FAILURE);
        }
    }

    while (s.top != -1) {
        postfix[j++] = pop(&s);
    }

    postfix[j] = '\0';
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* postfix) {
    struct Stack s;
    s.top = -1;
    int i = 0;

    while (postfix[i] != '\0') {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            push(&s, postfix[i++] - '0');
        } else if (isOperator(postfix[i])) {
            int op2 = pop(&s);
            int op1 = pop(&s);

            switch (postfix[i]) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }

            i++;
        } else {
            printf("Invalid character in expression!\n");
            exit(EXIT_FAILURE);
        }
    }

    return pop(&s);
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    // Get input infix expression
    printf("Enter infix expression: ");
    gets(infix);

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Print postfix expression
    printf("Postfix expression: %s\n", postfix);

    // Evaluate postfix expression
    int result = evaluatePostfix(postfix);

    // Print the final value
    printf("Final value: %d\n", result);

    return 0;
}
*/
/*     //odd and even nos. in array
#include <stdio.h>

int main() {
    int n, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Declare an array of size 'n'

    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Even numbers: ");
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    printf("Odd numbers: ");
    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
 }
 */
/*     //an string is a palindrome or not
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char str[], int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (isPalindrome(str, len)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
*/
/*    //implementation of stack using an array
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

int isFull(struct Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow.\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow.\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    return 0;
}

*/
/*     //sort number from input file and print in output file
#include <stdio.h>
#include <stdlib.h>

// Function to perform the bubble sort
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    int num, n = 0;

    // Get input file name from the user
    printf("Enter the name of the input file: ");
    scanf("%s", inputFileName);

    // Open the input file in read mode
    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }

    // Count the number of integers in the file
    while (fscanf(inputFile, "%d", &num) != EOF) {
        n++;
    }

    // Close and reopen the input file to rewind it
    fclose(inputFile);
    inputFile = fopen(inputFileName, "r");

    // Read the numbers into an array
    int numbers[n];
    for (int i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &numbers[i]);
    }

    // Sort the numbers
    bubbleSort(numbers, n);

    // Get output file name from the user
    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    // Open the output file in write mode
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        printf("Failed to open the output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Write the sorted numbers to both the console and the output file
    printf("Sorted numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]); // Print to the console
        fprintf(outputFile, "%d\n", numbers[i]); // Write to the output file
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("\nNumbers sorted and saved to '%s'.\n", outputFileName);

    return 0;
}

*/
/*    //calculate factorial of +ve integer in file
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    FILE *file = fopen("factorial.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    unsigned long long result = factorial(num);
    fprintf(file, "Factorial of %d is %llu\n", num, result);
    fclose(file);

    printf("Factorial of %d is %llu, saved to 'factorial.txt'.\n", num, result);
    return 0;
}

*/
/*    // copy the input file and print to the output file
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch;

    // Get input file name from the user
    printf("Enter the name of the input file: ");
    scanf("%s", inputFileName);

    // Open the input file in read mode
    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }

    // Get output file name from the user
    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    // Open the output file in write mode
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        printf("Failed to open the output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Copy content from input file to output file and print it
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
        putchar(ch); // Print to the console as well
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("\nFile copy successful!\n");

    return 0;
}

*/