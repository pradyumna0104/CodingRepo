class Solution {
public:
    int reverse(int x) {
        long rever = 0;
        while(x != 0){
            int last = x % 10;
            rever = (rever*10) + last;
            x/=10; 
        }
        if(rever > INT_MAX || rever < INT_MIN)  return 0;
        return int(rever);
    }
};