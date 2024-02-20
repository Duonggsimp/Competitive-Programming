#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;

int main(){

  freopen("CHONQUA.inp","r",stdin);
  freopen("CHONQUA.out","w",stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n,m,k;
  cin >> n >> m >> k;
  char x;
  ll a[n+5][m+5];
  ll f[n+5][m+5];
  memset (f,0,sizeof(f));

  for (long i=1; i<=n; i++){
     for (long j=1; j<=m; j++){
      cin >> x;
      if (x=='*')
        a[i][j] = 1; else
        a[i][j] = 0;
        f[i][j] = f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
     }
  }

  k-=2;
  ll maxx = -1e18;
  for (long i=k; i<=n; i++){
     for (long j=k; j<=m; j++)
        maxx = max(maxx,f[i][j]-f[i-k][j]-f[i][j-k]+f[i-k][j-k]);
  }
   cout << maxx;

    return 0;
}
