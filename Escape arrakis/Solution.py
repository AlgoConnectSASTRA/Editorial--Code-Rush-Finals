def solution(n, k, C):
    dp=[float('inf')]* (k+1)
    dp[0]=0
    for i in range(n):
        for j in range(C[i], k+1):
            dp[j] = min(dp[j], dp[j-C[i]]+1)
    if dp[k]==float('inf'):
        return -1
    else:
        return dp[k]
