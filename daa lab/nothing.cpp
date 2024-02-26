#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    cout<<"enter the element ."<<endl;
    for(int i = 0;i< size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sort(arr.begin(),arr.end());
    cout<<"sorted array : ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    reverse(arr.begin(),arr.end());
    cout<<"after reverse: ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    for(int i = 0;i<size;i++){
        cout<<i+1<<" th largest element is : "<<arr[i]<<endl;
    }
    return 0;
}
/*
o/p:
enter the size of the array : 6
enter the element .
5 17 3 1 2 27
sorted array : 1 2 3 5 17 27 
after reverse: 27 17 5 3 2 1 
1 th largest element is : 27
2 th largest element is : 17
3 th largest element is : 5
4 th largest element is : 3
5 th largest element is : 2
6 th largest element is : 1
*/