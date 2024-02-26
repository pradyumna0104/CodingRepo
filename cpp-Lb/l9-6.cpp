//find unique
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
void printunique(int arr[],int size)
{
    bool found;
    for (int i = 0; i < size; i++)
    {
        found = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
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
    cout<<"after find unique in the array"<<endl;
    printunique(arr,size);
    return 0;
}