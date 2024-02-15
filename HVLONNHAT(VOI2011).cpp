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

    ll n,k;

    cin >> n >> k;
    ll a[n+5][n+5];
    ll f[n+5][n+5];
    memset(f,0,sizeof(f));

    for (long i=1; i<=n; i++)
        for (long j=1; j<=n; j++){
            cin >> a[i][j];
            f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + a[i][j];
    }

    ll maxx = -1e18;
    for (long i=k; i<=n; i++)
        for (long j=k; j<=n; j++){
            maxx = max (maxx, f[i][j] - f[i][j-k] - f[i-k][j] + f[i-k][j-k]);
    }
    cout << maxx;
    return 0;
}
