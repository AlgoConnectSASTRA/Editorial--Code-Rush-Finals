#include<bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;
typedef  vector<int> vi;

void solve()
{
       int n=0,m=0,k=0,x=0,count=0,sum=0,ans=0;
       cin>>n;
       vi v(n);
       cin>>v;

       //Checker function
       auto isGood = [&](int mid) -> bool {
           int cnt = 0;
           for(int i=0;i<n;i++){
               if(v[i]>=mid){
                   cnt++;
               }
               else{
                   cnt = 0;
               }
               if(cnt>=mid) return true;
           }
           return false;
       };
       
       //Binary search
       int low = 1, high = n;
       while(low<high){
           int mid = low + (high-low+1)/2;
           if(isGood(mid)){
               low = mid;
           }
           else{
               high = mid-1;
           }
       }
       cout<<low<<'\n';   
}
