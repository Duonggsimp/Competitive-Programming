#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
long a[N], n, k, l, r, d ,vt ,ma;
int main()
{
  runfast;
  
  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif
  
  cin >> n >> k;
  ll s = 0;
  map <ll, ll> mp;

  for (long i=1; i<=n ;i++){
    cin >> a[i];
  }

  for (long i=1; i<=n ;i++){
    if (mp.find(a[i]-k) != mp.end()) ma = max(ma,i-mp[a[i]-k]);
    if (mp.find(a[i]+k) != mp.end()) ma = max(ma,i-mp[a[i]+k]);
    if (mp.find(a[i]) == mp.end()) mp[a[i]] = i;
    }

    if (ma == 0)
        cout << -1; else
        cout << ma;
  return 0;
}

