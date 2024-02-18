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

    cin >> n >> k;
    ll a[n+5];
    a[0] = 0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }

    ll x;
    for (long i=1; i<=k; i++){
        cin >> x;
        ll vt = lower_bound(a+1,a+n+1,x)-a;
        cout << vt << xn;
    }

    return 0;
}
