for _ in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    d1,d2={},{}
    for i in a:
        if i in d1:
            d1[i]+=1
        else:
            d1[i]=1
    for i in b:
        if i in d2:
            d2[i]+=1
        else:
            d2[i]=1
            
    c=0
    for i,j in d1.items():
        k=d2.get(i,-1)

        if k!=-1:
            c.max( c, min(k,j))
    print(c)