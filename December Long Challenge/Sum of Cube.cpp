#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353;

ll cube(ll n)
{
    return ((n%mod)*(n%mod)*(n%mod))%mod;
}
void solve()
{
    int n;
    cin>>n;
    ll sum = 0;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=(sum+cube(a[i]))%mod;
    }
    vector<ll> prefix(n);
    prefix[0] = a[0];
    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1]+a[i];
    }
    for(int i=1;i<n;i++)
        sum=(sum+cube(prefix[i]))%mod;
    vector<ll> final;
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<i-1;j++)
        {
            ll get = prefix[i] - prefix[j];
            final.push_back(get);
        }
    }
    for(int i=0;i<final.size();i++)
        sum=(sum+cube(final[i]))%mod;
    cout<<sum%mod<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
