Problem link : https://www.hackerrank.com/contests/coderush-24-finals/challenges/escape-arrakis

- This problem can be solved with DP and is a very common problem under **Unbounded knapsack**.
- dp[i][j] denotes minimum number of batteries required to form the electric-power *j*  using the elements of C from 0 to *i*.
- dp[i][j] is thus:
  - min(dp[i][j- C[i] ] + 1 , dp[i-1][j])
  - Explanation:
    - First term: If electric-power  *j-C[i]* can be formed using the elements of C from 0 to *i*, and the remaining electric-power can be filled up with picking C[i] once
    - Second term: If electric-power  *j* can be formed using the elements of C from 0 to *i-1*,   
- To bypass Memory Limit Exceeded, we have to space-optimize,
  -   We can see that the dp[i][j] depends on dp[i][j- C[i] ] + 1 , dp[i-1][j] i.e current row and previous row.
  -   Hence there is no need to store rows from 0 to i-2, and one dp array will suffice.
  -   Sort C earlier, so that we can update in same array.

 - Video explanation: https://www.youtube.com/watch?v=HgyouUi11zk
