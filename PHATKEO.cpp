#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const int M = 1e3+5;
const ll mo = 1e9+7;

ll n,m;
ll l,r;
ll f[N];
ll vt[N];
pair <ll, ll> a[N];

bool cmp(pair<ll,ll> a,pair<ll,ll> b){
    return a.se<b.se;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=n; i++){
        cin >> a[i].fi >> a[i].se;
    }

    sort(a+1,a+n+1,cmp);
    for (long i=1; i<=n; i++){
        f[i] = f[i-1] + a[i].fi;
        vt[i] = a[i].se;
    }

    while (m--){
        cin >> l >> r;
        ll x = lower_bound(vt+1,vt+n+1,l)-vt;
        ll y = upper_bound(vt+1,vt+n+1,r)-vt-1;
        cout << f[y] - f[x-1] << ' ';
    }
    return 0;
}

