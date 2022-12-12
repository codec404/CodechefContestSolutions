#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll getSum = n*(n+1);
    getSum>>=1;
    bool flag = true;
    if(getSum>k)
    {
        flag = false;
    }
    if(flag)
    {
        int i=0;
        while(i<n-1)
        {
            cout<<1<<" ";
            i++;
        }
        ll last = k-getSum;
        cout<<++last<<endl;
    }
    else
    cout<<-1<<"\n";
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
