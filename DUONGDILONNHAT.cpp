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

    ll n, m;
    cin >> n >> m;
    ll a[n+5][m+5];
    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }

    ll dp[n+5][m+5];
    memset(dp,0,sizeof(dp));

    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + a[i][j];
        }
    }

    cout << dp[n][m];
    return 0;
}
