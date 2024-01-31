#include<bits/stdc++.h>
using namespace std;
long n,x,S,s=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>S;
map<long long,long long> mp;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        if (mp.find(S-x)!=mp.end()) s+=mp[S-x];
        mp[x]++;
    }
    cout<<s;
    return 0;
}
