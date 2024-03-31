long solution(long n, long k, vector<long> C) {
    vector<long long int> dp(k + 1, INT_MAX );
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = C[i]; j <= k; ++j) {
            dp[j] = min(dp[j], dp[j - C[i]] + 1);
        }
    }
    if (dp[k] >= INT_MAX) {
        return -1;
    } else {
        return dp[k];
    }
}
