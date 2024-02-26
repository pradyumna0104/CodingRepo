//q. search a element  in a rotated sorted array 
#include <iostream>
using namespace std;
int binearysearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
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
int bsrotatesort(int arr[],int size,int key){
    int pivot = getpivot(arr,size);
    if(key >= arr[pivot] && key <= arr[size-1]){
          binearysearch(arr,pivot,size-1,key);
    }
    else{
          binearysearch(arr,0,pivot,key);
    }
}
int main(){
    int arr[5] = {87,90,1,2,45};
    cout<<" element is found : "<<bsrotatesort(arr,5,45)<<endl;
    return 0;
}