long gcd(long a, long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long solution(long n, vector<long> A) {
    long ans = A[0];
    for (int i = 1; i < n; i++) {
        ans = gcd(ans, A[i]);
    }
    return ans*n;
}
