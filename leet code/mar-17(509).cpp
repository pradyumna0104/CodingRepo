//509. Fibonacci Number
int fibf(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibf(n-1)+fibf(n-2);
}
class Solution {
public:
    int fib(int n) {
        return fibf(n);
    }
};