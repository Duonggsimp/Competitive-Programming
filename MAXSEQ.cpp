#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    ll n,k,s=0, x;
 
    cin >> n >> k;
    ll a[n+5] = {0};
    ll f[n+5] = {0};
 
    for (long i=1; i<=n; i++){
        cin >> a[i];
        f[i] = max (f[i-1],f[i-1]+a[i]);
    }
    ll l, r;
    for (long i=1; i<=k; i++){
       cin >> l >> r;
       cout << f[r] - f[l-1] << xn;
    }
    return 0;
}
