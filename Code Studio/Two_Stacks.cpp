#include <bits/stdc++.h> 
class TwoStack {
    int* arr;
    int size;
    int top;
    int bottom;
public:
    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size = s;
        arr = new int[s];
        top = -1;
        bottom = s;
    }
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(bottom - top > 1){
            top++;
            arr[top] = num;
        }
    }
    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(bottom - top > 1){
            bottom--;
            arr[bottom] = num;
        }
    }
    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top>=0){
            int ans = arr[top];
            top--;
            return ans;
        }
        else{
            return -1;
        }
    }
    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(bottom < size){
            int ans = arr[bottom];
            bottom++;
            return ans;
        }
        else{
            return -1;
        }
    }
};