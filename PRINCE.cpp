#include <bits/stdc++.h>
using namespace std;
using ll=long long;
long n,k,i,j,d,f[100][105],m,x,y,t,cnt;
char a[100][100];
void dfs (long x,long y){
if (x>0&&y>0&&x<=m&&y<=n&&f[x][y]!=1&&a[x][y]!='#'){
   f[x][y]=1;
   d++;
   dfs(x,y-1);
   dfs(x,y+1);
   dfs(x-1,y);
   dfs(x+1,y);
}
}
void solve(){
cin>>n>>m;
  for (long i=1;i<=25;i++)
    for (long j=1;j<=25;j++){
    a[i][j]=' ';
    f[i][j]=0; }
  for (long i=1;i<=m;i++)
  for (long j=1;j<=n;j++){
    cin>>a[i][j];
    if (a[i][j]=='@'){
        x=i;
        y=j;
    }
  }
  dfs(x,y);
  cnt++;
   cout<<"Case "<<cnt<<": "<<d<<"\n";
   d=0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  cin>>t;
  while (t--)
    solve();
  return 0;
}

