#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'

using namespace std;
const int N=1e5+5;
ll n,k,vt,d;
ll f[N];

void sanguoc(){
   for (long i=2; i<=N/2; i++){
    for (long j=i; j<=N/i; j+=i)
        f[j]++;
   }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  sanguoc();
  ll n,m;
  cin >> n >> m;
  ll x;
  ll a[n+5][m+5];

  memset(a,1e9,sizeof(a));

  for (long i=1; i<=n; i++)
     for(long j=1; j<=m; j++){
    cin >> x;
    a[i][j] = f[x];
  }

  ll dp[n+5][m+5];
  memset(dp,1e9,sizeof(dp));
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++)
        cout << a[i][j] << ' ';
    cout << xn;
  }
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++)
        dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + a[i][j];
  }
  cout << dp[n][m];
  return 0;
}



