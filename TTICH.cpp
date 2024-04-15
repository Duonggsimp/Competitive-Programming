#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e7+5;
const ll mo = 1e9+7;

ll t,d;
ll f[N];
ll a[100005];
ll n,x,m;

void sng(){
  fill (f+1,f+N+1,0);
  for (long i=2; i<=sqrt(N); i++){
      if (f[i] == 0)
      for (long j=i; j<=N; j+=i){
        if (f[j] == 0) f[j] = i;
    }
  }
}

void solve(){

  map <ll,ll> mp;
  map <ll,ll> mp1;
  d = 0;
  cin >> n >> m;
  for (long i=1; i<=n; i++){
    cin >> x;
    while (x!=1){
        a[++d] = f[x];
        mp[f[x]]++;
        x /= f[x];
    }
  }
  for (long i=1; i<=m; i++){
    cin >> x;
    while (x!=1){
        mp1[f[x]]++;
        x /= f[x];
    }
  }
  for (long i=1; i<=d; i++){
    if (mp[i] != mp1[i]) { cout << "NO" << xn; return; }
  }
  cout << "YES" << xn;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sng();
    cin >> t;
    while (t--)
        solve();
    return 0;
}







