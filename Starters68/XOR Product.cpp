#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353;
void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> even;
    vector<ll> odd;
    vector<ll> one;
    ll getOne = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1){
        getOne++;
        }
        if(v[i]&1) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    ll len = even.size();
    ll i = 0;
    while(i<len && getOne>0)
    {
        even[i]+=1;
        auto it = odd.begin();
        odd.erase(it++);
        getOne--;
        i++;
    }
    ll prod = 1;
    for(int k=0;k<even.size();k++)
    {
        prod = ((prod * even[k])%mod)%mod;
    }
    prod = prod%mod;
    for(int k=0;k<odd.size();k++)
    {
        prod = ((prod * odd[k])%mod)%mod;
    }
    prod = prod%mod;
    cout<<prod<<endl;

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
