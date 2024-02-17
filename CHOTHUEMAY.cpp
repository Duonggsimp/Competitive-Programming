#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
int main()
{
  runfast;

  ll n;
  cin >> n ;

  ll a[n+5],b[n+5],c[n+5];
  ll dp[n+5] = {0};

  for (long i=1; i<=n; i++)
    cin >> a[i] >> b[i] >> c[i];

  for (long i=1; i<=n; i++){
        dp[i] = c[i];
    for (long j=1; j < i; j++)
    if (b[j] < a[i])
        dp[i] = max(dp[i],dp[j]+c[i]);
  }

   cout << dp[n];
  return 0;
}

