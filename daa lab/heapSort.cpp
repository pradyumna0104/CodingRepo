#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// To heapify a subtree rooted with node i which is an index in arr[]
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2
    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
// Main function to do heap sort
void heapSort(vector<int>& arr) {
    int n = arr.size();
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
// Function to print an array
void printarray(const vector<int>& arr) {
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}
int main() {
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter " << size << " no. of element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "before sorting." << endl;
    printarray(arr);
    heapSort(arr);
    cout << "after sorting." << endl;
    printarray(arr);
    return 0;
}
