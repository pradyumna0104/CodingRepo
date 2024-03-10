//349. Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> arr;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // Add the common element to the result
                arr.push_back(nums1[i]);
                // Move both pointers to find the next common element
                i++;
                j++;
                // Skip duplicates
                while (i < nums1.size() && nums1[i] == nums1[i - 1]) i++;
                while (j < nums2.size() && nums2[j] == nums2[j - 1]) j++;
            } else if (nums1[i] < nums2[j]) {
                // Move the pointer for the smaller value
                i++;
            } else {
                // Move the pointer for the smaller value
                j++;
            }
        } 
        return arr;  
    }
};