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
    map<pair<char,int>,int> getValues;
    char getFirstChar = s[0];
    int storeSubLen = 1;
    int i=1;
    getValues[{getFirstChar,storeSubLen}]++;
    do
    {
        if(getFirstChar != s[i])
        {
            getFirstChar = s[i];
            storeSubLen = 1;
        }
        else{
            storeSubLen+=1;
        }
        getValues[{getFirstChar,storeSubLen}]++;
        i++;
    }while(i<n);
    int maxLen = INT_MIN;
    for(auto x = getValues.begin();x!=getValues.end();x++)
    {
        pair<char,int> get = x->first;
        int pick = get.second;
        if(x->second==1)
        {
            maxLen = max(maxLen,pick-1);
            continue;
        }
        maxLen = max(maxLen,pick);
    }
    printf("%d\n",maxLen);
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
