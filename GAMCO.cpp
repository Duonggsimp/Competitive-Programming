#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
#define pb push_back
using namespace std;
const int N = 1e6+5;
const int M = 1e3+5;
const ll mo = 1e9+7;

ll n,m;
ll cnt;
ll x,y,s,t;
ll d[M][M];
char a[M][M];
ll fx[4] = {0,0,1,-1};
ll fy[4] = {1,-1,0,0};

void bfs(ll x,ll y){
     queue <pair<ll,ll>> q;
     q.push({x,y});
     while (!q.empty()){
        pair <ll,ll> top = q.front();
        q.pop();
        for (long i=0; i<4; i++){
            ll u = top.fi + fx[i];
            ll v = top.se + fy[i];
            if (u >= 1 && v >= 1 && u <= n && v <= m && a[u][v] != '*'){
                q.push({u,v});
                a[u][v] = '*';
                d[u][v] = d[top.fi][top.se] + 1;
             }
         }
     }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=n; i++){
      for (long j=1; j<=m; j++){
       cin >> a[i][j];
       if (a[i][j] == 'B'){
         x = i;
         y = j;
        }
       if (a[i][j] == 'C'){
         s = i;
         t = j;
        }
      }
    }

    bfs(x,y);
    cout << d[s][t];
    return 0;
}
