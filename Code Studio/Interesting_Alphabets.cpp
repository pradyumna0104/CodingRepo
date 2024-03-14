#include <bits/stdc++.h> 
vector<vector<char>> interestingPattern(int n)
{
    // Write your code here
    vector<vector<char>> ans;
    for(int i =1;i<=n;i++){
        char p = 'A' + n-1;
        vector<char> line;
        for(int j=1;j<=i;j++){
            line.push_back(p-i+1);
            p++;
        }
        ans.push_back(line);
    }
    return ans;
}