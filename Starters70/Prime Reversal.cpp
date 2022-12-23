#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    string b;
    cin>>b;
    int count1a = 0 ,count1b = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == '1')
        count1a++;
    }
    for(int i=0;i<n;i++){
        if(b[i] == '1')
        count1b++;
    }
    if(count1a == count1b) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

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
