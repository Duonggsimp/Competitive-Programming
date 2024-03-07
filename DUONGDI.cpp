#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long a[105][105];
ll d;
void loang(ll x,ll y){
  if (a[x][y] == a[x][y-1]-1){
    d++;
    loang(x,y-1); }  else
  if (a[x][y] == a[x][y+1]-1){
    d++;
    loang(x,y+1); }  else
  if (a[x][y] == a[x-1][y]-1){
    d++;
    loang(x-1,y); }  else
  if (a[x][y] == a[x+1][y]-1){
    d++;
    loang(x+1,y); }
}
int main()
{

  runfast;
  ll t;
  cin >> t;
  while (t--){
  ll n,m;
  ll x=0, y=0;
  cin >> n >> m;
  memset(a,0,sizeof(a));
  char k;
  for (long i=1; i<=n; i++){
    for (long j=1; j<=m; j++){
      cin >> k;
      a[i][j] = k-0;
      if (a[i][j] == 65){
        x=i;
        y=j;
      }
    }
  }
  d=1;
  loang(x,y);
  if (d==26)
  cout << "YES" << xn; else
  cout << "NO" << xn;
  }
  return 0;
}

