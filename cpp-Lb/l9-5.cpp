//swap alternate
//1 2 3 4 5 6 7 8 
//2 1 4 3 6 5 8 7
#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing the array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[],int size)
{
    int start = 0;
    int end = 1;
    while (end< size)
    {
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }
}
int main() {
    int arr[100];
    int size;
    cin>>size;
    cout<<" \nenter the element of the array : ";
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