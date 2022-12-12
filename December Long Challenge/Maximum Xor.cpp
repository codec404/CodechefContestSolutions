#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    int n = b.length();
    int countZeroA = 0, countOneA = 0, countZeroB = 0, countOneB = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='0')
        countZeroA++;
        else
        countOneA++;

        if(b[i] == '0')
        countZeroB++;
        else
        countOneB++;
    }
    int totZero = countZeroA+countZeroB;
    int totOne = countOneA+countOneB;
    int getMin = min(totOne,totZero);
    int i=0;
    string getAns="";
    while(i<getMin)
    {
        getAns+='1';
        i++;
    }
    int l = n-getMin;
    while(l!=0)
    {
        getAns+='0';
        l--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<getAns[i];
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
