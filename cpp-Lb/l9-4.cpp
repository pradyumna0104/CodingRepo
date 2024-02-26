//reverse an array
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
void reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    reverse(arr,size);
    cout<<"after reverse"<<endl;
    printarray(arr,size);
    return 0;
}