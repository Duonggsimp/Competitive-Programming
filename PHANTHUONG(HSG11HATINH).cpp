#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
const int N = 1e6+3, mo = 1e9+7;
int n, m, dp[N];
int a[N];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n ;
    for (long i = 1; i<=n ; i++){
        cin >> a[i];
    }

    cin >> m;

    if ( m==1 ){
        dp[1] = a[1];
        dp[2] = a[2];
    for (long i = 3; i<=n ; i++){
        for (long j = 1; j < i-1 ; j++)
        dp[i] = max(dp[i], dp[j]+a[i]);
    }

    cout << dp[n];
    return 0;
    } else {

        dp[1]=a[1];
        dp[2]=a[2];
        dp[3]=a[1]+a[2];
    for (long i=1; i<=n ;i++)
       dp[i] = max(dp[i-3]+a[i-1]+a[i],max(dp[i-2]+a[i],dp[i-1]));
    cout << dp[n];
    }
    return 0;
}
