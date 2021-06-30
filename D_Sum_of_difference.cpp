#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n;cin>>n;
    vector < ll > v(n), suffix(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(), v.end());
    suffix[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]+v[i];
    ll sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+= suffix[i+1]-v[i]*(n-1-i);
        
    }

    cout<<sum<<endl;

    
}