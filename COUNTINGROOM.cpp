#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll n,m;
ll res;
char a[N][N];
ll f[N][N];
ll fx[4] = {0,0,-1,1};
ll fy[4] = {-1,1,0,0};

void dfs(ll x, ll y){
    if (x >= 0 && x <= n && y >= 0 && y <= m && a[x][y] == '.'){
        a[x][y] = '#';
        for (long i=0; i<4; i++){
            ll u = x + fx[i];
            ll v = y + fy[i];
            dfs(u,v);
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
        }
    }

    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
            if (a[i][j] == '.'){
                res++;
                dfs(i,j);
            }
        }
    }

    cout << res;
   return 0;
}
