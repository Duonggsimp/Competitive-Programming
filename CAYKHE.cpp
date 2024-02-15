#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll w[N], v[N],dp[105][100005];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,m;
    cin >> n >> m;
    for (long i=1; i<=n; i++){
        cin>> w[i] >> v[i];
    }
    
    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
            if (w[i] > j)
                dp[i][j] = dp[i-1][j]; else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
    
    cout << dp[n][m];
    return 0;
}
