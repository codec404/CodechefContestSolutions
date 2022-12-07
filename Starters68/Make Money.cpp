#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x,c;
    cin>>n>>x>>c;
    int cost = 0;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(x-a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]<=c)
        {
            continue;
        }
        else{
            a[i]=x;
            cost+=c;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];   
    }
    cout<<sum-cost<<endl;
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
