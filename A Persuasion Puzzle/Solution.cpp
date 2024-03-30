#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    long t;
    cin >> t;

    while(t--)
    {
        long n;
        cin >> n;

        vector<long> m(n);

        for( long &i: m)
            cin >> i;

        cout << solution( n, m) << endl;

    }

    return 0;
}