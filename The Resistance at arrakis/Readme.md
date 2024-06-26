Problem link: https://www.hackerrank.com/contests/coderush-24-finals/challenges/the-resistance-at-arrakis

- To find if a square of side L can be fitted inside the given configuration,
  - We have to iterate through the array, while updating count.
  - Increment count if a column of length >=L is spotted.
  - Make count 0, if a column of length <L is spotted.
  - If at any point count ==L, return True ( meaning it can be formed)
- If at no points count==L, return False. (It cannot be formed)  

- We can try doing this for all possible sizes from 1 to max(array), but it will result in TLE -> O(n2).
- To optimize this, we can use Binary search on answer,
  - if a square of size *mid* cannot be formed then no squares of size *mid* to max(array) can be formed.
  - if a square of size *mid* can be formed, then we don't have to check for sizes 1, *mid-1*.
- Set left=1, right=max(array) and start binary search on size of square -> O(nlogn).
