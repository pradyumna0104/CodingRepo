#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printed array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binearysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    //here mid = (start + end)/2
    //may be showing time limit exced so use this instead
    int mid = start + ((end-start)/2);
    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;
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
    int index = binearysearch(arr,size,key);
    cout<<"the element "<<key<<" present in index : "<<index<<endl;
    return 0;
}