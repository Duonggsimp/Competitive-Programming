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
  pair <ll,ll> a[n+1];
  ll dp[n+5]={0};

  for (long i = 1; i<=n ;i++)
    cin >> a[i].fi >> a[i].se;
  sort (a+1,a+n+1);
  for (long i=1; i<=n; i++){
     for (long j=1; j<i; j++){
        if (a[j].se <= a[i].fi)
            dp[i] = max(dp[i],dp[j]);
     }
     dp[i] += a[i].se-a[i].fi;
     //cout << dp[i] <<' ';
  }
  cout << *max_element(dp+1,dp+n+1);
  return 0;
}
