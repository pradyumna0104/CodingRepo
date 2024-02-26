//swap alternate
//1 2 3 4 5 6 7 8 
//2 1 4 3 6 5 8 7
#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"print array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int size){
    int i = 0;
    while (i+1 < size)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    printarray(arr,size);
    swapalternate(arr,size);
    cout<<"after alternate swapping "<<endl;
    printarray(arr,size);
    return 0;
}