//238. Product of Array Except Self
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(n,0);
        int product = 1;
        int zeros = 0;
        for(auto i:nums){
            if(i==0){
                zeros++;
                continue;
            }
            product*=i;
        }
        if(zeros==0){
            for(int i =0;i<n;i++){
                ans[i] = product/nums[i];
            }
        }else if(zeros == 1){
            for (int i = 0; i < n; i++) {
                if(nums[i] == 0){
                    ans[i] = product;
                }
                else{
                    ans[i] = 0;
                }
            }
        }
        return ans;
    }
};