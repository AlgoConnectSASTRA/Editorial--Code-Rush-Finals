#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t; 
    cin >> t;

    while(t--)
    {
        ll n;
        string a, b;

        cin >> n >> a >> b;

        vector<ll> freq1(26), freq2(26);
        
        for(int i=0;i<a.size();i++) {
            freq1[a[i]-'a']++;
            freq2[b[i]-'a']++;
        }

        ll ans=0;
        for(int i=0;i<26;i++)
            ans=max(ans, min(freq1[i], freq2[i]));

        cout << ans << endl;        
    }
    
    return 0;
}

