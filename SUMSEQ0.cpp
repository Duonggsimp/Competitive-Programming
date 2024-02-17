#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    ll a[n+5];
    ll s[n+5] = {};
    map <ll ,ll> mp;

    for (long i=1; i<=n; i++){
       cin >> a[i];
       s[i] = s[i-1] + a[i];
    }

    ll res=0;
    mp[0] = 1;
    for (long i=1; i<=n; i++){
        res += mp[s[i]];
        mp[s[i]]++;
    }
    cout << res;
    return 0;
}
