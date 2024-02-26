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