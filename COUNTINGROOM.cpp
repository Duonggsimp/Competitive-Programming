#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2e3+5;
const ll mo=1e9+7;
int f[N][N];
char a;
ll d;
ll n,m;
ll x,y;
void dfs(ll x,ll y){
    f[x][y]=1;
    if (f[x-1][y]==0) dfs(x-1,y);
    if (f[x+1][y]==0) dfs(x+1,y);
    if (f[x][y-1]==0) dfs(x,y-1);
    if (f[x][y+1]==0) dfs(x,y+1);
}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> m;
  memset(f,1,sizeof(f));
  for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
            cin >> a;
            if (a=='#')
                f[i][j] = 1; else
                f[i][j] = 0;
        }
  }
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++){
        if (f[i][j]==0){
            dfs(i,j);
            d++;
        }
    }
  }
  cout << d;
    return 0;
}
