#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e3+5;
const ll mo=1e9+7;
ll d;
ll a[N][N],f[N][N]={0};
ll x,y,m,n;
void dfs(ll x, ll y){
  if (x>0&&y>0&&x<=n&&y<=m&&f[x][y]==0&&a[x][y]==1){
    d++;
    f[x][y]=1;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x-1,y);
    dfs(x+1,y);
  }

}
int main(){


   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   cin >> n >> m >> x >> y;
   for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++)
      cin >> a[i][j];
   }
   dfs(x,y);
   cout << d;
  return 0;
}






