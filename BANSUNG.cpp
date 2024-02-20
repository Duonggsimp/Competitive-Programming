#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
ll n, a[N], res, vt , dp[N];
 
int main()
{
  runfast;
 
  cin >> n;
  for (long i = 1; i<=n ;i++)
    cin >> a[i];
 
  dp[1] = a[1];
  dp[2] = a[1]+a[2];
 
  for (long i = 3; i<=n ;i++){
    dp[i] = max(dp[i-3]+a[i-1]+a[i],max(dp[i-1],dp[i-2]+a[i]));
  }
   cout << dp[n];
  return 0;
}
 
