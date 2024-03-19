//34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int s=-1,e=-1;
        int n =nums.size();
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                s=i;
                break;
            }
        }
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i] == target){
                e=i;
                break;
            }
        }
        ans.push_back(s);
        ans.push_back(e);
        return ans;
    }
};