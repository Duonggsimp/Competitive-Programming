#include <bits/stdc++.h>
#define _FILE "Temp"
#define ll long long
using namespace std;
int a[2500][2500]={},h[2500][2500]={};
int t,res;
const int MOD = 1e9+7;
 
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
 
  int N, k;
  cin >> N >> k;
 
  for (int i=1; i<=N; i++) {
  for (int j=1; j<=N; j++){
  cin>>a[i][j];
  h[i][j]=h[i-1][j]+h[i][j-1]-h[i-1][j-1]+a[i][j];
  }
  }
 
  for (int i=k; i<=N; i++) {
  for (int j=k; j<=N; j++) {
      
  t=h[i][j]+h[i-k][j-k]-h[i][j-k]-h[i-k][j];
  res=max(res,t);
      }
  }
  cout<<res;
  return 0;
}
 
