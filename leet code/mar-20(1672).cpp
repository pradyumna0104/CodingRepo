//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum = 0;
        for(auto acc:accounts){
            int sum = 0;
            for(int x:acc){
                sum+=x;
                if(sum>maxsum) maxsum = sum;
            }
        }
        return maxsum;
    }
};