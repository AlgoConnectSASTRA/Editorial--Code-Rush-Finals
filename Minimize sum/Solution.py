from math import gcd
def solution(n,A):
    all_even = all(num % 2 == 0 for num in A)
    all_odd = all(num % 2 != 0 for num in A)
    
    if all_even or all_odd:
        min_num = min(A)
        max_num = max(A)
        min_gcd = gcd(min_num, max_num)
        return min_gcd * len(A)
    else:
        return len(A)

#nlogn approach
from math import gcd
def solution(n,A):
  ans=A[0]
  for i in A:
    ans=gcd(ans,i)
  return ans
