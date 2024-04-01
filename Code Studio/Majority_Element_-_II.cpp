#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int> ans;
    vector<int> sol;
    int n = arr.size();
    for(int i =0;i<n;i++){
        ans[arr[i]]++;
    }
    for(auto it : ans){
        if(it.second>floor(n/3)){
            sol.push_back(it.first);
        }
    }
    return sol;
}