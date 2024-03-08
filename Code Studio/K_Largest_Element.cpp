#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    sort(a.begin(),a.end());
    vector<int> temp;
    for(int i = (n-k);i<n;i++){
        temp.push_back(a[i]);
    }
    return temp;
}