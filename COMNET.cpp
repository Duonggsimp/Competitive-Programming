#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 5e3+5;
const ll mo = 1e9+7;

ll n,m;
ll ans;
vector <ll> a = {};
vector <ll> adj[N] = {};
bool f[N];

void dfs(ll x){
    f[x] = true;
    for (long i : adj[x])
      if (!f[i]) dfs(i);
}

void lienthong(){
  memset(f,0,sizeof(f));
  for (long i=1; i<=n; i++){
    if (!f[i]){
        ans++;
        a.push_back(i);
        dfs(i);
    }
  }
  cout << ans-1 << xn;
  for (long i=1; i<ans; i++){
    cout << a[0] << ' ' << a[i];
    cout << xn;
  }
}

int main(){

    //freopen("LIENTHONG.inp","r",stdin);
   // freopen("LIENTHONG.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=m; i++){
      ll x,y; cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
   lienthong();
   return 0;
}
