#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int> arr;
    while(head){
        arr.push_back(head->data);
        head = head->next;
    }
    int s = 0;
    int e = arr.size()-1;
    while(s<e && arr[s]  == arr[e]){
        s++;e--;
    }
    return s>=e;
}