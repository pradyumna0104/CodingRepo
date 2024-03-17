#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int ans = -1;
    //sort karo
    sort(arr.begin(),arr.end());
    //reverse karo(decreasing order me)
    reverse(arr.begin(),arr.end());
    int i =1;
    //skip karo till all similar largest element
    while(arr[i] == arr[i-1]){
        i++;
    }
    //condition check and result update
    if(arr.size()>=2 && i<arr.size()){
        ans = arr[i];
    }
    return ans;
}