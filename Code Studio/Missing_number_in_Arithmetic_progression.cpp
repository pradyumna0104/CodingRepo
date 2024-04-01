#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) 
{
    int d;
    int diff1 = arr[1] - arr[0];    
    int diff2 = arr[2] - arr[1];
    if(diff1<=diff2){
        d = diff1;
    }else{
        d = diff2; 
    }
    for(int i =0;i<n;i++){
        if(arr[i+1] - arr[i] != d){
            return arr[i]+d;
            break;
        }
    }
    return -1;
}
