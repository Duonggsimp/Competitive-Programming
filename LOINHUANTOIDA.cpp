#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n;
ll a[N];
ll res, minn;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    minn = 1e18;
    for (long i=1; i<=n; i++){
        minn = min(minn,a[i]);
        res = max(res,a[i]-minn);
    }
    cout << res;
    return 0;
}
