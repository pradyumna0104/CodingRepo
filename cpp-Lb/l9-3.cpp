//linear search
#include <iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key)
{
    cout<<"printing the array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
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
    int key;
    cout<<"\nenter the element to find in the array : ";
    cin>>key;
    bool search = linearsearch(arr,size,key);
    if(search){
        cout<<"element is found \n";
    }
    else{
        cout<<"element is not found \n";
    }
    return 0;
}