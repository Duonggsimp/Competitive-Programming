#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll n;
    cin >> n;
    ll a[n+5];
    ll dp[n+5] = {0};

    for (long i=1; i<=n; i++){
        cin >> a[i];
        dp[i] = 1;
    }
  
    ll maxx = -mo;
    for (long i=1; i<=n; i++){
        if (a[i] >= a[i-1])
            dp[i]+=dp[i-1]; else
            dp[i] = 1;
        maxx = max (maxx,dp[i]);
    }
  
    cout << maxx;
    return 0;
}
