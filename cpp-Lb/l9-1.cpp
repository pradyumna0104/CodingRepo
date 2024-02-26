#include <iostream>
using namespace std;
void inputarray(int arr[],int size){
    cout<<"please enter "<<size<<" no. of elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }  
}
void printarray(int arr[],int size){
    cout<<"Printing array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void findminmax(int arr[],int size){
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
         if(arr[i] < min){
            min = arr[i];
        }
    }
        cout<<"maximum element on the array is : "<<max<<endl;
        cout<<"minimum element on the array is : "<<min<<endl;
}
int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr1[100];
    inputarray(arr1,size);
    printarray(arr1,size);
    findminmax(arr1,size);
    return 0;
}