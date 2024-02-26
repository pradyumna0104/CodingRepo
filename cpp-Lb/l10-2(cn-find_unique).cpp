//find unique
//every element except one element present twice in array
//1 4 5 7 3 1 7 5
//o/p = 3
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
int findunique(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans= ans^arr[i];
        /* code */
    }
    return ans;
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
    int ans = findunique(arr,size);
    cout<<"unique element is: "<<ans<<endl;
    return 0;
}