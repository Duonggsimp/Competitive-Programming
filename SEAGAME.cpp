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

  ll a[n+5],b[n+5];
  ll dp[n+5] = {0};

  for (long i=1; i<=n; i++)
    cin >> a[i];
  for (long i=1; i<=n; i++)
    cin >> b[i];

  ll mi =1e18;
  sort (b+1,b+n+1);
  for (long i=1; i<=n; i++){
    ll vt =lower_bound(b+1,b+n+1,a[i])-b;
    mi = min(mi, abs(b[vt]+a[i]));
    mi = min(mi, abs(b[vt-1]+a[i]));
    mi = min(mi, abs(b[vt+1]+a[i]));
  }

  cout << mi;
  return 0;
}

