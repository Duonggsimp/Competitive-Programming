#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const ll N = 1e3+5;
const ll mo = 1e9+7;

ll n,m;
ll a[N][N];
ll s;
ll maxx,vt;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> m;
  for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++)
           cin >> a[i][j];
  }

  for (long i=1; i<=m; i++){
    for (long j=1; j<=n; j++){
      a[n+1][i] += a[j][i];
      }
  }

  for (long i=1; i<=m; i++)
    if (a[n+1][i] > maxx){
        maxx = a[n+1][i];
        vt = i;
    }
    cout << vt;
  return 0;

}
