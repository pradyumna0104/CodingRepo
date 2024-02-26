//first and last position of an element in a sorted array
#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printed array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int firstoccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + ((end-start)/2);
    while(start<=end){
        if(key == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int lastoccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + ((end-start)/2);
    while(start<=end){
        if(key == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
    int arr[100];
    cout<<"enter the size of the array : ";
    int size;
    cin>>size;
    cout<<endl;
    cout<<"enter the elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter to be search : ";
    int key;
    cin>>key;
    cout<<endl;
    int firstoccur1 = firstoccur(arr,size,key);
    int lastoccur1 = lastoccur(arr,size,key);
    cout<<"the element "<<key<<" present in first occur index : "<<firstoccur1<<endl;
    cout<<"the element "<<key<<" present in last occur index : "<<lastoccur1<<endl;
    return 0;
}