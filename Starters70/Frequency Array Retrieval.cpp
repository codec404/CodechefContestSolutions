#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    map<int,pair<int,int>> mp;
    vector<int> v;
    int get = 1;
    for(int i=0;i<n;i++)
    {
        if(mp.find(b[i]) == mp.end())
        {
            mp[b[i]] = {get,b[i] - 1};
            if(mp[b[i]].second == 0) 
            mp.erase(b[i]);
            v.push_back(get);
            get++;
        }
        else{
            if(mp[b[i]].second>0)
            {
                v.push_back(mp[b[i]].first);
                mp[b[i]].second--;
                if(mp[b[i]].second == 0) 
                mp.erase(b[i]);
            }
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        auto store = it->second;
        if(store.second > 0)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto x: v)
    {
        cout<<x<<" ";
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
