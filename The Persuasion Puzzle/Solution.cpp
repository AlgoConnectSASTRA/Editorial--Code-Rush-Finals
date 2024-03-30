int solution( long n, vector<long> m)
{
    int sum=0, ans=0;
    for( long i=0; i<n; i++)
    {
        sum+=m[i];
        if( sum==i+1 )
            ans++;
    }

    return ans;
}
