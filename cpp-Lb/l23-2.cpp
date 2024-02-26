#include <iostream>
using namespace std;

void printarray(int arr[][4],int row,int col){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void takeinputarr(int arr[][4],int row,int col){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}

bool ispresent(int arr[][4],int row,int col,int target){
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    takeinputarr(arr,3,4);
    int target;
    cout<<"enter the element to be found : ";
    cin>>target;
    if(ispresent(arr,3,4,target)){
        cout<<"element is found . \n";
    }
    else{
        cout<<"element is not found . \n";
    }
    return 0;
}