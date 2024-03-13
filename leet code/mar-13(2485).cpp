class Solution {
public:
    int pivotInteger(int n) {
        int ans = -1;
        
        // Iterate from 1 to n
        for(int i = 1; i <= n; i++) {
            int half = i * (i + 1) / 2; // Sum of numbers from 1 to i
            int full = (n * (n + 1) / 2) - ((i - 1) * i / 2); // Sum of numbers from i+1 to n
            
            if(half == full) {
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};
