#include <bits/stdc++.h>
#define ll long long
#define fi first
#define xn '\n'
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
bool scp(ll n){
    if (n==0)
    return false; 
  if (trunc(sqrt(n))*trunc(sqrt(n))==n)
    return true; else
    return false;
}
int main()
{
  runfast;

  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif

  ll n;
   cin >> n;
   ll a[n+5];
   ll dp[n+5]={0};
   for (long i=1; i<=n; i++){
    cin >> a[i];
   }

   for (long i=1; i<=n; i++){
       dp[i] = 1; 
    long fi = max((long)1,i-10);
    for (long j=fi; j<i; j++){
        if (scp(abs(a[i]-a[j]))){
        dp[i] = max(dp[i],dp[j]+1);
         }
      }
   }
  cout << *max_element(dp+1,dp+n+1) ;
  return 0;
}
