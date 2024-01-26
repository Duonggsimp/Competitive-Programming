#include <bits/stdc++.h>
#define _FILE "Temp"
#define ll long long
using namespace std;
 
const int MOD = 1e9+7;
 
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
 
  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif
 
  int N, x;
  cin >> N >> x;
 
  int c[N+1];
  for (int i=1; i<=N; i++) cin >> c[i];
 
  int f[x+1];
  f[0] = 0;
  for (int i=1; i<=x; i++) {
    f[i] = INT_MAX;
    for (int j=1; j<=N; j++) {
      if (i >= c[j] && f[i-c[j]] != -1) f[i] = min(f[i],f[i-c[j]]+1);
    }
    if (f[i] == INT_MAX) f[i] = -1;
  }
 
  cout << f[x];
 
  return 0;
}
 
