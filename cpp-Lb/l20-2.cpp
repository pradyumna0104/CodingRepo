#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0,j = 0;
    int k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    //if array 1 has remaining terms
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    //if array 2 has remaining terms 
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    cout<<"after merge "<<endl;
    print(arr3,8);
    return 0;
}