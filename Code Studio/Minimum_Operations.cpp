// Day 10 : Minimum Operations
#include <bits/stdc++.h> 
int minimumOperation(vector<int> &arr, int n) {
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    int count=0;
    for(auto it:mp){
        count= max(count, it.second);
    }
    return n-count;
}