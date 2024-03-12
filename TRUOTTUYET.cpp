#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long a[105][105];
long d[105][105];
ll x,y;
long maxx;
ll n,m;
void loang(ll i,ll j){
  if (a[i][j] > a[i][j-1] && d[i][j] >= d[i][j-1] && i>0 && j>0 && i<=n && j<=m){
    d[i][j-1] = d[i][j]+1;
    loang(i,j-1);
    }
  if (a[i][j] > a[i-1][j] && d[i][j] >= d[i-1][j] && i>0 && j>0 && i<=n && j<=m){
    d[i-1][j] = d[i][j]+1;
    loang(i-1,j);
    }
  if (a[i][j] > a[i][j+1] && d[i][j] >= d[i][j+1] && i>0 && j>0 && i<=n && j<=m){
    d[i][j+1] = d[i][j]+1;
    loang(i,j+1);
    }
  if (a[i][j] > a[i+1][j] && d[i][j] >= d[i+1][j] && i>0 && j>0 && i<=n && j<=m){
    d[i+1][j] = d[i][j]+1;
    loang(i+1,j);
    }
}

void MAX(){
    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++)
            maxx = max(maxx, d[i][j]);
    }
}
void UP(){
    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++)
            d[i][j] = 1;
    }
}
int main()
{

  runfast;
  cin >> n >> m;
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++){
        cin >> a[i][j];
        d[i][j] = 1;
    }
  }
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++){
        loang(i,j);
        MAX();
        UP();
    }
  }
  cout << maxx;
  return 0;
}

