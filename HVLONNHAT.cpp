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

    ll n,m;

    cin >> n >> m;
    ll a[n+5][m+5];
    ll f[n+5][m+5];
    memset(f,0,sizeof(f));
    for (long i=1; i<=n+1; i++)
        f[i][1] = 1;
    for (long i=1; i<=m+1; i++)
        f[1][i] = 1;

    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++)
            cin >> a[i][j];
    }

    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++)
            if (a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j-1])
            f[i][j] = min (f[i-1][j], min(f[i][j-1],f[i-1][j-1])) + 1; else
            f[i][j] = 1;
    }
    ll maxx = -1e18;
   for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++)
        maxx = max(maxx,f[i][j]);
   }
   cout << maxx;
    return 0;
}
