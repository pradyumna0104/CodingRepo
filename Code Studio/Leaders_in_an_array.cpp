#include <bits/stdc++.h> 
using namespace std;
vector<int> findLeaders(vector<int> &arr, int n) {
    vector<int> ans;
    for(int i =0;i<n;i++){
        bool temp = true; 
        for(int j = i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp = false; 
                break;
            }
        }
        if(temp){
            if(ans.empty() || ans.back() != arr[i] ) 
                ans.push_back(arr[i]);
        }
    }
    return ans;
}