//35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int low =0;
        // int high = nums.size()-1;
        // while(low<=high){
        //     int mid = low +(high-low)/2;
        //     if(nums[mid] == target){
        //         return mid;
        //     } else if (nums[mid]<target){
        //         low = mid + 1;
        //     }else{
        //         high = mid + 1;
        //     }
        // }
        // return low;
        int ans = -1;
        int  n =nums.size();
        if(nums[n-1] <= target){
            ans = n;
        }
        for(int i = 0;i<n;i++){
            if(nums[i]>=target){
                ans = i;
                break;
            }
        }
        return ans;
    }
};