//Day 20 : Check Subset
#include <bits/stdc++.h>
using namespace std; 
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    unordered_map<int,int> mp;
    for(int i =0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(int i =0;i<m;i++){
        if(mp[arr2[i]]){
            mp[arr2[i]]--;
        
        if(mp[arr2[i]] < 0) return false;

        }else return false;
    }
    return true;
}