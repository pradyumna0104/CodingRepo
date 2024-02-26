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

void RowWiseSum(int arr[][4],int row,int col){
    cout<<"row wise sum =  ";
    for(int i =0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
void ColumnWiseSum(int arr[][4],int row,int col){
    cout<<"column wise sum =  ";
    for(int i =0;i<col;i++){
        int sum = 0;
        for(int j =0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][4];
    takeinputarr(arr,3,4);
    printarray(arr,3,4);
    RowWiseSum(arr,3,4);
    ColumnWiseSum(arr,3,4);
    return 0;
}