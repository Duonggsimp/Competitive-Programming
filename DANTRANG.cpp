#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const int M = 1e3+5;
const ll mo = 1e9+7;
 
ll n,l;
ll sum;
ll a[N];
ll t[N];
ll dp[N];
 
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    cin >> n >> l;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        t[i] = t[i-1] + a[i];
    }
 
    dp[0] = 0;
    for (long i=1; i<=n; i++){
        dp[i] = 1e18;
        for (long j=i; j>=0; j--){
            if (t[i]-t[j-1] <= l)
                dp[i] = min(dp[i],max(dp[j-1],l-(t[i]-t[j-1])));
        }
    }
 
    cout << dp[n];
    return 0;
}
