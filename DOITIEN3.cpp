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
ll dp[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    dp[0] = 1;
    for (long i=1; i<=n; i++){
        for (long j=1; j<=k; j++){
            if (a[i] <= j)
                dp[j] = (dp[j]+dp[j-a[i]]) % mo;
        }
    }

    cout << dp[k];
    return 0;
}
