#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll a[N];
ll n,k;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    a[0] = 0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    map <ll, ll> mp;
    mp[0]=1;
    ll res=0;
    for (long i=1; i<=n; i++){
        res += mp[a[i]];
        mp[a[i]]++;
    }
    cout << res;
    return 0;
}
