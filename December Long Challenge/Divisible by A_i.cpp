#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    ll getGCD = v[0];
    for(int i=1;i<n;i++)
    {
        getGCD = __gcd(getGCD,v[i]);
    }
    for(int i=0;i<n;i++)
    {
        ll ans = v[i]/getGCD;
        cout<<ans<<" ";
    }
    cout<<"\n";
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
