#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,k;

    cin >> n;
    ll a[n+5];
    a[0] = 0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    map <ll, ll >mp;
    ll s = 0;
    ll maxx = -1;

    for (ll i=1; i<=n; i++){
        s+=a[i];
        if (s==0)
            maxx = max(maxx, i);
        if (mp.find(s)!=mp.end())
            maxx = max(maxx, i-mp[s]); else
            mp[s] = i;
    }
    cout << maxx;
    return 0;
}
