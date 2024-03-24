#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N];
ll f[N];
ll dp[N];
ll res,vt;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        f[i] = 1e9;
    }

    res = 1;
    for (long i=1; i<=n; i++){
         vt = lower_bound(f+1,f+n+1,a[i])-f;
         f[vt] = a[i];
         res = max(res,vt);
    }

    cout << n-res;
    return 0;
}
