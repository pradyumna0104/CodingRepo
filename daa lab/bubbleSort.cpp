#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printarray(vector<int> &arr){
    cout << "Array : ";
    for (auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}
void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter " << size << " no. of element: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "before sorting." << endl;
    printarray(arr);
    bubbleSort(arr);
    cout << "after sorting." << endl;
    printarray(arr);
    return 0;
}