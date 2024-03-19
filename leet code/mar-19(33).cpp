//33. Search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& A, int key) {
        int n = A.size();
        for (int i=0; i<n; i++) {
            if (A[i] == key) {
                return i;
            }
        }
        return -1;
    }
};