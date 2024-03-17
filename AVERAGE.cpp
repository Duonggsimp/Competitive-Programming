#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+5;
long a[N], n, k, l, r, d ,vt ,ma;
int main()
{
  runfast;
  cin >> n >> k;
  ll s = 0;
  for (long i=1; i<=n ;i++){
    cin >> a[i];
    a[i] -= k;
  }
  map <ll, ll> mp;
  for (long i=1; i<=n ;i++){
    s+=a[i];
    if (s==0)
        ma = max(ma,i);
    if (mp.find(s)==mp.end())
        mp[s]=i; else
    if (i-mp[s]>ma){
        vt = mp[s]+1;
        ma = i-mp[s];
    }
  }
  if (vt == 0){
    cout << -1;
  } else
  cout << ma;
  return 0;
}
