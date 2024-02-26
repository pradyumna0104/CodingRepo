//print sum of all element in the array
#include <iostream>
using namespace std;
void sum(int arr[],int size)
{
    cout<<"printing the array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of all element in the array is : "<<sum<<endl;
}
int main() {
    int arr[100];
    int size;
    cin>>size;
    cout<<"enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sum(arr,size);
    return 0;
}
