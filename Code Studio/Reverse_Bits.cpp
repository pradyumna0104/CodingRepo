long reverseBits(long n) {
    // Write your code here.
    int i = 0;
    long ans = 0;
    while(i<32){
        ans = (ans<<1) | n&1;
        n>>=1;
        i++;
    }
    return ans;
}