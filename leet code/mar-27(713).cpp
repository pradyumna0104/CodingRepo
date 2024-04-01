//713. Subarray Product Less Than K
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int sum = 1;
            for(int j =i;j<n;j++){
                sum = sum*nums[j];
                if(sum>=k) break;
                ans++;
            }
        }
        return ans;
    }
};