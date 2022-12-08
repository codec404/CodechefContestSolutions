#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<ll> ans;
    for(int i=0;i<n/2;i++)
    {
        ans.push_back(a[n/2+i]);
        ans.push_back(a[i]);
    }
    if(n&1) ans.push_back(a[n-1]);
    int c = 1;
    for(int i=0;i<n-2;i++)
    {
        if(ans[i]<=ans[i+1])
        {
            if(ans[i+1]<=ans[i+2]){
            c = 0;
            break;
            }
        }
        else if(ans[i]>=ans[i+1])
        {
            if(ans[i+1]>=ans[i+2]){
                c=0;
                break;
            }
        }
    }
    if(c!=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    else
    {
        cout<<-1;
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
