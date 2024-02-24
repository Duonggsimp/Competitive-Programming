#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;

int main(){


  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n,k;
  cin >> n;
  
  ll a[n+5];
  map<ll,ll>mp;
  for (ll i=1; i<=n; i++){
     cin >> a[i];
     if (mp.find(a[i])==mp.end())
      mp[a[i]]=i;
  }

  ll dc=0,dk=0;
  sort(a+1,a+n+1);
  cin >> k;
  ll x;
  
  for (long i=1; i<=k; i++){
    cin >> x;
    if (binary_search(a+1,a+n+1,x)){
      cout << mp[x] << xn;
      dc++;
    } else {
      cout << -1 << xn ;
      dk++;
    }
  }
  
  if (dk>dc)
  cout << -1; else
  if (dk==dc)
  cout << 0; else
  if (dk<dc)
  cout << 1;
    return 0;
}

