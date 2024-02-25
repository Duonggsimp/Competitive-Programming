#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 2004010501;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,m;
    ll t;
    cin >> n;
    ll a[n+5] = {0};
    ll dp[n+5] = {0};
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    dp[1] = a[1];
    ll x;
    for (long i=2; i<=n; i++){
        cin >> x;
        dp[i] =min(dp[i-1]+a[i],dp[i-2]+x);

    }
   cout << dp[n];
    return 0;
}
