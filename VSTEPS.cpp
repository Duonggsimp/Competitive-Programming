#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll f[N];
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
 
    ll n,k;
    cin >> n >> k;
    ll x;
 
    map <ll,bool> mp;
    for (long i=1; i<=k; i++){
      cin >> x;
      mp[x]=true;
    }
    if (mp[1]==false)
    f[1] = 1; else f[1] = 0;
    if (mp[2]==false)
    f[2] = f[1]+1; else f[2] = 0;
     
    for (long i=3; i<=n; i++){
        if (mp[i]==false)
        f[i] = (f[i-1]+f[i-2])%mo;
    }
    cout << f[n];
    return 0;
}
