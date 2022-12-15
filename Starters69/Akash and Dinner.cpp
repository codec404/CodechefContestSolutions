#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<ll> b(n);
    for(int i=0;i<n;i++) cin>>b[i];

    set<ll> s;
    for(int i=0;i<n;i++) s.insert(a[i]);

    if(s.size() < k)
    {
        cout<<-1<<endl;
        return;
    }
    unordered_map<ll,ll> mp;
    int i=0;
    do{
        if(mp.find(a[i])!=mp.end())
        {
            ll get = mp[a[i]];
            mp[a[i]] = min(get,b[i]);
        }
        else
        {
            mp[a[i]] = b[i];
        }
        i++;
    }while(i<n);

    vector<ll> getAns;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        getAns.push_back(it->second);
    }
    int l = k;
    sort(getAns.begin(),getAns.end());
    ll result = 0;
    int j=0;
    while(l!=0)
    {
        result += getAns[j];
        j++;
        l--;
    }
    cout<<result<<endl;
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
