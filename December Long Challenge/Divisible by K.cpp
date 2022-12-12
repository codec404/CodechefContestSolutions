#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll product = 1;
    for(int i=0;i<n;i++){
    cin>>a[i];
    product *=a[i];
    product %=k;
    }
    if(product%k==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
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
