//array is sorted
//but it ie rotated by some element
//q. find the pivot in a rotated sorted array 
#include <iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s= 0;
    int e= n-1;
    int mid =s+ (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}
int main(){
    int arr[5] = { 47,50,1,2,45};
    cout<<" pivot is : "<<getpivot(arr,5)<<endl;
    return 0;
}