#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
int main()
{
  runfast;

  ll n,m;
  cin >> n >> m ;

  ll a[n+5],b[n+5];
  ll dp[n+5] = {0};

  for (long i=1; i<=n; i++)
    cin >> a[i];
  for (long i=1; i<=m; i++)
    cin >> b[i];

  sort (a+1,a+n+1);
  sort (b+1,b+m+1);
  ll i=1 , j=1;
  ll res=0;
  while (i<=n && j<=m){
    if (a[i]>b[j]){
        res++;
        i++;
        j++;
    } else {
        i++;
    }
  }
  cout << res;
  return 0;
}

