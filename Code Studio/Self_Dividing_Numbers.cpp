#include <bits/stdc++.h> 
bool check(int n){
    int val = n;
    while(val>0){
        int rem = val%10;
        if( rem==0 || n%rem!=0) return false;
        val /= 10;
    }
    return true;
}
vector < int > findAllSelfDividingNumbers(int lower, int upper) {
    // Write your code here
    vector<int> ans;
    for(int i = lower;i<=upper;i++){
        if(check(i)){
            ans.push_back(i);
        }
    }
    return ans;
}