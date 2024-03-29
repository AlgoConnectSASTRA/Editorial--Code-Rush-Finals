def check(x,arr):
    n=len(arr)
    c=0
    for i in range(n):
        if(arr[i]>=x):
            c+=1
        else:
            c=0
        if(c==x):
            return True
    return False

def solution(N, A):
    l,r=0,N
    ans=1
    while(l<=r):
        mid=(l+r)//2
        
        print(check(mid,A))
        if(check(mid,A)):
            ans=mid
            l=mid+1
        else:
            r=mid-1
    return ans
