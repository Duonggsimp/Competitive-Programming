#include <bits/stdc++.h>
using namespace std;
long h[1005][1005],a[1005][1005],n,m,t,i,j,ma,k,dt;
int main(){
  freopen("LAND.INP", "r", stdin);
  freopen("LAND.OUT", "w", stdout);
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  cin>>n>>m;
  cin>>k;
  for (long i=1;i<=n;i++ ){
    for (long j=1;j<=m;j++){
    cin>>a[i][j];
    h[i][j]=h[i][j-1]+h[i-1][j]+a[i][j]-h[i-1][j-1];
    }
  }
  for (long i=1;i<=n;i++)
    for (long j=1;j<=m;j++)
  for(long i1=1;i1<=j;i1++){
      if (h[i][j]-h[i1-1][j]<=k)
    if (ma<=h[i][j]-h[i1-1][j]&&dt<=(i-i1+1)*j){
      ma=h[i][j]-h[i1-1][j];
      dt=(i-i1+1)*j;
    }
  }
  cout<<dt;
 return 0;
}







