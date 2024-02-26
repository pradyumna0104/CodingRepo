#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printarray(vector<int> &arr){
    cout<<"Array : ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
void insertionsort(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
         // Move elements of arr[0..i-1], 
         //that are greater than key, 
         //to one position ahead of their current position
        if(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    vector<int> arr(size);
    cout<<"enter "<<size<<" no. of integers : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"before sorted."<<endl;
    printarray(arr);
    insertionsort(arr);
    cout<<"after sorted."<<endl;
    printarray(arr);
    return 0;
}