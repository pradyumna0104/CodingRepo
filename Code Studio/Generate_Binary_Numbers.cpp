#include <bits/stdc++.h> 
vector<string> generateBinaryNumbers(int n)
{
    vector<string> ans;
    for(int i =1;i<=n;i++){
        int temp = i;
        string binary ="";
        while(temp!=0){
            int rem = temp%2;
            binary = to_string(rem) + binary;
            temp /=2;
        }
        ans.push_back(binary);
    }
    return ans;
}