int mod = 1000000007;
long long get_sum(vector<long long> &sumArray, long long x, long long n) {
    long long count = (x / n) %mod;
    long long remain=(x % n)%mod;
    long long ansi =( count * sumArray[n] + sumArray[remain]) % mod;
    return ansi;
}
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int> ans;
    vector<long long> sumArray(n + 1);
    for (int i = 1; i <= n; i++) {
        sumArray[i] = (sumArray[i - 1] + arr[i - 1]) % mod;
    }
    for (auto it:queries) {
        long long l = it[0];
        long long r = it[1];
        long long rsum = get_sum(sumArray, r, n);
        long long lsum = get_sum(sumArray, l - 1, n);
        ans.push_back((int) ((rsum - lsum + mod  ) % mod));
    }
    return ans;
}