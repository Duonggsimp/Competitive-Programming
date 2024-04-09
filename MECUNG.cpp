#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

string a[N];
bool d[N][N];
ll n,m;
ll f[N][N];
ll g,h;
ll l,r;
ll res;
ll fx[5] = {0,0,0,-1,1};
ll fy[5] = {0,1,-1,0,0};

void bfs(ll x,ll y){
   d[x][y] = 1;
   ll cnt = 0;
   for (long i=1; i<=4; i++){
     ll u = x + fx[i];
     ll v = y + fy[i];
     if (d[u][v] == 0 && u>=1 && v>=1 && u<=m && v<=n){
        d[u][v] = 1;
        cnt++; bfs(u,v);
     }
   }
   if (cnt == 0){
    g = x;
    h = y;
   }
}

void dfs(ll x,ll y){
   d[x][y] = 1;
   ll cnt = 0;
   for (long i=1; i<=4; i++){
     ll u = x + fx[i];
     ll v = y + fy[i];
     if (d[u][v] == 0 && u>=1 && v>=1 && u<=m && v<=n){
        d[u][v] = 1;
        dfs(u,v);
        cnt = max(cnt,f[u][v]);
     }
   }
   f[x][y] = cnt + 1;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> m >> n;


    for (long i=1; i<=m; i++){
      cin >> a[i]; a[i] = '#' + a[i];
    }

    for (long i=1; i<=m; i++){
      for (long j=1; j<=n; j++){
        if (a[i][j] == '#') d[i][j] = 1; else {
            l = i; r = j;
        }
      }
    }
    bfs(l,r);
    
    for (long i=1; i<=m; i++){
      for (long j=1; j<=n; j++){
            if (a[i][j] == '#') d[i][j] = 1; else d[i][j] = 0;
        }
    }
    dfs(g,h);

    cout << f[g][h]-1;
    return 0;
}
