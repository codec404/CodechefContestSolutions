#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll countOne = 0,countTwo = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%3==1)
        countOne++;
        else if(a[i]%3==2)
        countTwo++;
    }
    ll ans = 0;
    ll getMax = max(countOne,countTwo);
    ll getMin = min(countOne,countTwo);
    countOne -= getMin;
    countTwo -=getMin;
    ans+=getMin;
    ll leftOver = max(countOne,countTwo);
    ll start = leftOver/4;
    ans += start*3;
    ll more = leftOver%4;

   if(more==1 && getMax!=1){
        ans+=2;
    }
    else if(more==1 && getMax==1){
        ans+=6;
    }
    else if(more==2 && getMax!=2){
        ans+=4;
        if(n==4){
            ans+=1;
        }
    }
    else if(more==2 && getMax==2){
        ans+=5;
    }
    else if(more==3){
        ans+=4;
    }
    
    cout<<ans<<endl;
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
