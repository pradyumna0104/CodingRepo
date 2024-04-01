//41. First Missing Positive
#include <vector>
#include <algorithm> 
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0 && nums[i] <= n)
                ans[nums[i] - 1] = 1;
        }
        
        for (int i = 0; i < n; ++i) {
            if (ans[i] == 0)
                return i + 1;
        }
        return n + 1;
    }
    
};