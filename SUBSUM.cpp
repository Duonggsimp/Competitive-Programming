#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const int M = 1e3+5;
const ll mo = 1e9+7;

ll n;
ll a[N];
ll minc[N];
ll minl[N];
ll res;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    minl[1] = a[1];
    minc[1] = 1e18;
    for (long i=2; i<=n; i++){
        a[i] += a[i-1];
        if (i % 2 == 0)
        minc[i] = min(a[i],minc[i-1]), minl[i] = minl[i-1]; else
        minl[i] = min(a[i],minl[i-1]), minc[i] = minc[i-1];
    }

    res = -1e18;
    for (long i=1; i<=n; i++){
        if (i % 2 == 0)
        res = max(res, a[i] - minc[i-1]); else
        res = max(res, a[i] - minl[i-1]);
    }

  //  if (res == 1) cout << -2; else
    cout << res;
    return 0;
}

