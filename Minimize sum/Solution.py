from math import gcd
def solution(n,A):
  ans=A[0]
  for i in A:
    ans=gcd(ans,i)
  return ans*n
