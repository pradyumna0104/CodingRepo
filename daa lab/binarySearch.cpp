#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> arr, int key){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e){
        if (arr[mid] == key){
            return true;
        }
        else if (arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
int main(){
    vector<int> arr = {1, 9, 7, 2, 8, 4, 6, 5, 3};
    sort(arr.begin(), arr.end());
    int key;
    cout << "enter the key: ";
    cin >> key;
    if (binarySearch(arr, key)){
        cout << "element is found." << endl;
    }
    else{
        cout << "element is not found." << endl;
    }
    return 0;
}