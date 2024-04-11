#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const int M = 1e3+5;
const ll mo = 1e9+7;

ll n;
ll a[N][N];
ll f[N][N];
ll res;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        for (long j=1; j<=n; j++){
            cin >> a[i][j];
            f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] +a[i][j];
        }
    }

    res = 1e18;
    for (long i=1; i<=n; i++){
        for (long j=1; j<=n; j++){
            ll maxx = max({f[i][j],f[i][n]-f[i][j],f[n][j]-f[i][j],f[n][n]-f[i][n]-f[n][j]+f[i][j]});
            ll minn = min({f[i][j],f[i][n]-f[i][j],f[n][j]-f[i][j],f[n][n]-f[i][n]-f[n][j]+f[i][j]});
            res = min(res,maxx-minn);
        }
    }

    cout << res;
    return 0;
}

