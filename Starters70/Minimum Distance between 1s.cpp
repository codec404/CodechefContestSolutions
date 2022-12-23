#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1 = 0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        v.push_back(i+1);
    }
    bool flag = false;
    int getVal = v[v.size()-1];
    for(int i=0;i<v.size();i++)
    {
        if((getVal - v[i])&1)
        {
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
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
