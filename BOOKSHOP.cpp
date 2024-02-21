#include <bits/stdc++.h>
#define ll long long
#define fi first
#define xn '\n'
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;

int main()
{

  runfast;
  ll n, k;
  cin >> n >> k;
  ll a[n+5];
  ll b[n+5];

  for (long i=1; i<=n; i++){
    cin >> a[i];
  }
  for (long i=1; i<=n; i++){
    cin >> b[i];
  }

  ll f[k+5] = {0};
  for (long i=1; i<=n; i++){
    for (long j=k; j>=1; j--)
        if (j>=a[i])
    f[j]=max(f[j],f[j-a[i]]+b[i]);
  }

  cout << f[k];
  return 0;
}
