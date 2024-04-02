#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;


ll n,m;
ll a[N][N];
ll d[N][N];
ll u,v;
ll fx[4] = {0,1,0,0};
ll fy[4] = {0,0,-1,1};

void bfs(ll i,ll j){
  queue<pair<ll,ll>> q;
  q.push({i,j});
  a[i][j] = 1;
  d[i][j] = 1;
  while (!q.empty()){
    pair<ll,ll> top = q.front(); q.pop();
    for (long k=1; k<=3; k++){
        ll x = top.fi + fx[k];
        ll y = top.se + fy[k];
        if (x >= 1 && y >=1 && x <=n && y<=n && a[x][y] != 1){
            d[x][y] = d[top.fi][top.se]+1;
            if (x == u && y == v) return;
            q.push({x,y});
            a[x][y] = 1;
         }
      }
   }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> u >> v;
    for (long i=1; i<=n; i++){
        for (long j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    bfs(1,1);
    cout << d[u][v];
    return 0;

}

