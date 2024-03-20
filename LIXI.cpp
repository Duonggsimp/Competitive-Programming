#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m,k,x;
ll d;
ll res;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    pair <ll, ll> a[n+5];
    for (long i=1; i<=n; i++){
        cin >> a[i].se >> a[i].fi;
        d += a[i].fi;
    }
    sort(a+1,a+n+1,greater<pair<ll, ll>>());
    for (long i=1; i<=d+1; i++){
        res += a[i].se;
    }

    cout << res;
    return 0;
}

