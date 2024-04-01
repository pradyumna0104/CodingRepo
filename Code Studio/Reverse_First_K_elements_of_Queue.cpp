#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> ans;
    vector<int> arr;
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        arr.push_back(ele);
    }    
    reverse(arr.begin(),arr.begin()+k);
    for(int i =0;i<arr.size();i++){
        ans.push(arr[i]);
    }
    return ans;
}
