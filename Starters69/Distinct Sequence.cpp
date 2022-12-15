#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll m;
    cin>>m;
    ll n= 2*m;
    string s;
    cin>>s;
    ll count_One = 0, count_Zero = 0;
    vector<int> one;
    vector<int> zero;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        {
            count_One++;
            one.push_back(i);
        }
        else{
            count_Zero++;
            zero.push_back(i);
        }
    }
    if(count_One == n || count_Zero==n)
    {
        cout<<-1<<endl;
        return;
    }
    int j = 0 , p=0;
    vector<ll> ans(m);
    for(int i = 0;i<m;i++)
    {
        if(count_One != 0)
        {
            ans[i] = one[j]+1;
            j++;
            count_One --;
            continue;
        }
        ans[i] = zero[p]+1;
        p++;
    }
    sort(ans.begin(),ans.end());
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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
