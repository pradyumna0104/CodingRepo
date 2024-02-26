#include <iostream>
using namespace std;
int main(){
    //create a 2d array
    int arr[3][4];
    //int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    /*
    //taking input from user  <- taking input row wise
    for(int row =0;row<3;row++){
        for(int col =0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    */
    /*
    i/p-> 1 2 3 4 5 6 7 8 9 10 11 12                  
    o/p-> 1 2 3 4 
          5 6 7 8 
          9 10 11 12 
    */

    //taking input from user  <- taking input column wise
    for(int col =0;col<4;col++){
        for(int row =0;row<3;row++){
            cin>>arr[row][col];
        }
    }
    /*
    i/p-> 1 2 3 4 5 6 7 8 9 10 11 12                  
    o/p-> 1 4 7 10  
          2 5 8 11 
          3 6 9 12 
    */

    //print the array
    for(int row =0;row<3;row++){
        for(int col =0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}