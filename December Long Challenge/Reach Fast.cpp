#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int diff = abs(x-y);
    if(diff%k==0)
    {
        cout<<diff/k<<endl;
    }
    else
    {
        cout<<diff/k+1<<endl;
    }
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
