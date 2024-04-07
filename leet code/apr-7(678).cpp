//678. Valid Parenthesis String
class Solution {
public:
    bool checkValidString(string s) {
        int leftmin = 0,leftmax = 0;
        for(auto it:s){
            if(it == '('){
                leftmin++;
                leftmax++;
            }else if(it == ')'){
                leftmin--;
                leftmax--;
            }else{
                leftmin--;
                leftmax++;
            }
            if(leftmax < 0) return false;
            if(leftmin < 0) leftmin = 0;
        }
        return leftmin == 0;
    }
};